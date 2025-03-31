import java.util.Scanner;

public class Main250324
{
	public static void	main(String[] args)
	{
		Main250324 ps = new Main250324();
		System.out.println("J011입니다.");
		ps.J011();
		ps.J011();
		System.out.println("J012입니다.");
		ps.J012();
		ps.J012();
		System.out.println("J013입니다.");
		ps.J013();
		ps.J013();
		System.out.println("J014입니다.");
		ps.J014();
		ps.J014();
		ps.J014();
		ps.J014();
		System.out.println("J015입니다.");
		ps.J015();
		ps.J015();
	}
	public void	J011()
	{
		int	height, weight;
		double	bmi;

		Scanner input = new Scanner(System.in);
		height = input.nextInt();
		weight = input.nextInt();
		bmi = weight / ((height * height) / 10000.0);
		if (bmi >= 25.0)
			System.out.println("Yes");
		else
			System.out.println("No");
	}
	public void	J012()
	{
		double m2_area;
		double pyung_area;

		Scanner m2 = new Scanner(System.in);
		m2_area = m2.nextDouble();
		pyung_area = m2_area / 3.305;
		System.out.printf("%.1f\n", pyung_area);
		if (pyung_area >= 50.0)
			System.out.println("huge");
		else if (pyung_area >= 30.0)
			System.out.println("large");
		else if (pyung_area >= 15.0)
			System.out.println("normal");
		else
			System.out.println("small");
	}
	public void	J013()
	{
		int	kor, eng, math;
		int	total;
		double	average;
		Scanner input = new Scanner(System.in);
		kor = input.nextInt();
		eng = input.nextInt();
		math = input.nextInt();
		total = eng + math + kor;
		average = total / 3.0;
		System.out.printf("%d %.1f\n", total, average);
		System.out.println("Korean - " + ((kor >= 70) ? "Pass" : "Fail"));
		System.out.println("English - " + ((eng >= 70) ? "Pass" : "Fail"));
		System.out.println("Math - " + ((math >= 70) ? "Pass" : "Fail"));
	}
	public void J014()
	{
		int	income;
		double	tax;

		Scanner input = new Scanner(System.in);
		income = input.nextInt();
		if (income < 10000000)
			tax = ((double)income * 9.5 / 100.0);
		else if (income < 40000000)
			tax = ((double)income * 19 / 100.0);
		else if (income < 80000000)
			tax = ((double)income * 28 / 100.0);
		else
			tax = ((double)income * 37 / 100.0);
		System.out.printf("%.0f\n", tax);
	}
	public void	J015()
	{
		int	num1, num2, num3;
		int	max_num, min_num;

		Scanner input = new Scanner(System.in);
		num1 = input.nextInt();
		num2 = input.nextInt();
		num3 = input.nextInt();
		max_num = num1;
		min_num = num1;
		if (num2 > max_num)
			max_num = num2;
		if (num3 > max_num)
			max_num = num3;
		if (num2 < min_num)
			min_num = num2;
		if (num3 < min_num)
			min_num = num3;
		System.out.print(max_num + " " + min_num + "\n");
	}
}
