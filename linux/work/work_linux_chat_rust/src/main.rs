use axum::{
    routing::{get, post},
    http::StatusCode,
    response::IntoResponse,
    Json, Router, handler,
};
use serde::{Deserialize, Serialize};
use std::net::SocketAddr;

#[tokio::main]
async fn main() {
    // initialize tracing
    //启动日志记录
    tracing_subscriber::fmt::init();

    // build our application with a route
    //构建路由
    let app = app_routers();

    // run our app with hyper
    // `axum::Server` is a re-export of `hyper::Server`
    //服务端口
    let addr = SocketAddr::from(([127, 0, 0, 1], 3000));
    tracing::debug!("listening on {}", addr);
    //启动服务
    axum::Server::bind(&addr)
        .serve(app.into_make_service())
        .await
        .unwrap();
}

fn app_routers() -> Router {
    Router::new().
        route("/", get(root))
}


// basic handler that responds with a static string
//handler函数
async fn root() -> &'static str {
    "Hello, World!"
}

