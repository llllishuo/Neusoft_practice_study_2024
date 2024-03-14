package com.example.java11tutorial.chapter06.exercises.ex03;

public class GuessNumber {
	private int value;
	private int number;

	public GuessNumber(int value) {
		this.value = value;
	}

	public void setNumber(int number) {
		this.number = number;
	}

	public int guess() {
		if (number > value)
			return 1;
		else if (number == value)
			return 0;
		else
			return -1;
	}

	@Override
	public String toString() {
		return "GuessNumber(value=" + value + ", number=" + number + ")";
	}

	public static void main(String[] args) {
		GuessNumber gn = new GuessNumber(400);
		long max = 1000;
		long min = 1;
		while (true) {
			long mid = (max + min) / 2;
			gn.setNumber((int) mid);
			int ret = gn.guess();
			System.out.println(gn);
			if (ret == 1) {
				if (mid < max)
					max = mid;
				else
					max--;
			} else if (ret == -1) {
				if (mid > min)
					min = mid;
				else
					min++;
			} else
				break;
		}
	}

}
