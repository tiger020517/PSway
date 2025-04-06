import java.util.Scanner;

public class Main5
{
	public static void main(String[] args)
	{
		Main5 ps = new Main5();
		ps.J025();
	}
	public void	J021()
	{
		int	height, weight;
		double	bmi;
		int	people;
		int	bimans = 0;

		Scanner input = new Scanner(System.in);
		people = input.nextInt();
		for (int i = 0; i < people; i++)
		{
			height = input.nextInt();
			weight = input.nextInt();
			bmi = weight / ((height * height) / (10000.0));
			if (bmi >= 25)
				bimans += 1;
		}
		System.out.println(bimans);
	}
	public void	J022()
	{
		double	m2_area;
		double	pyung_area;
		int	count1;
		int	count2;
		int	count3;
		int	count4;

		Scanner input = new Scanner(System.in);
		count1 = 0;
		count2 = 0;
		count3 = 0;
		count4 = 0;

		for (int i = 0; i < 10; i++)
		{
			m2_area = input.nextDouble();
			pyung_area = m2_area / 3.305;
			if (pyung_area < 15)
				count1 += 1;
			else if (pyung_area < 30)
				count2 += 1;
			else if (pyung_area < 50)
				count3 += 1;
			else
				count4 += 1;
		}
		System.out.println(("small - " + count1));
		System.out.println(("normal - " + count2));
		System.out.println(("large - " + count3));
		System.out.println(("huge - " + count4));
	}
	public void	J023()
	{
		int	count;
		int	number;
		int	totalsum;
		double	average;

		Scanner input = new Scanner(System.in);
		count = input.nextInt();
		totalsum = 0;
		for (int i = 0; i < count; i++)
		{
			number = input.nextInt();
			totalsum += number;
		}
		average = totalsum / (double)count;
		System.out.printf("%d %.1f\n", totalsum, average);
	}
	public void	J024()
	{
		int[] numbers = new int[10];
		int first;
		int second;
		int second_max_index;

		Scanner input = new Scanner(System.in);
		for (int i = 0; i < 10; i++)
		{
			numbers[i] = input.nextInt();
		}
		first = numbers[0];
		for (int i = 0; i < 10; i++)
		{
			if (first < numbers[i])
				first = numbers[i];
		}
		second = numbers[0];
		second_max_index = 0;
		if (first == second)
		{
			second = numbers[1];
			second_max_index = 1;
		}
		for (int i = 0; i < 10; i++)
		{
			if (second < numbers[i] && (numbers[i] != first))
			{
				second = numbers[i];
				second_max_index = i;
			}
		}
		second_max_index = second_max_index + 1;
		System.out.printf("[%d] %d\n", second_max_index, second);
	}
	public void J025()
	{
		int[] monthdays = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
		int month;
		int day;
		int day_count;

		Scanner input = new Scanner(System.in);
		month = input.nextInt();
		day = input.nextInt();
		if (month < 1 || month > 12)
		{
			System.out.println("Wrong date!");
			return;
		}
		else if (day < 1 || day > monthdays[month - 1])
		{
			System.out.println("Wrong date!");
			return;
		}
		day_count = 0;
		for (int i = 0; i < month - 1; i++)
			day_count += monthdays[i];
		day_count += day;
		System.out.println(day_count);
	}
	public void	J026()
	{
		int	number;
		int	max_num, min_num;
		int	numin;
		Scanner input = new Scanner(System.in);
		int[] nums = new int[101];

		number = input.nextInt();
		for (int i = 0; i < number; i++)
		{
			numin = input.nextInt();
			nums[numin]++;
		}
		max_num = 0;
		min_num = 100;
		for (int i = 0; i < nums.length; i++)
		{
			if (nums[i] != 0 && i > max_num)
				max_num = i;
			if (nums[i] != 0 && i < min_num)
				min_num = i;
		}
		System.out.println("가장 큰 수 " + max_num);
		System.out.println("가장 작은 수 " + min_num);
	}
	public void	J027()
	{
		int[] heights = new int[10];
		int[] weights = new int[10];
		double[] bmi = new double[10];
		int count;
		int i;
		Scanner input = new Scanner(System.in);

		i = input.nextInt();
		if (i > 10 || i <= 0)
			return;
		for (int j = 0; j < i; j++)
		{
			heights[j] = input.nextInt();
			weights[j] = input.nextInt();
			bmi[j] = weights[j] / ((heights[j] * heights[j]) / (10000.0));
		}
		count = 0;
		System.out.print("Overweight person - ");
		for (int j = 0; j < i; j++) {
			if (bmi[j] > 25.0)
			{
				System.out.print((j+1) + " ");
				count++;
			}
		}
		System.out.println("\nTotal - " + count);
	}
	public void	J028()
	{
		int[][] jumsu = new int[5][3];
		int[] sum_students = new int[5];
		double[] average_students = new double[5];
		char[] grade = new char[5];
		int[] sum_class = new int[3];
		double[] average_class = new double[3];
		Scanner input = new Scanner(System.in);

		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				jumsu[i][j] = input.nextInt();
			}
			sum_students[i] = jumsu[i][0] + jumsu[i][1] + jumsu[i][2];
			average_students[i] = sum_students[i] / 3.0;
			if (average_students[i] < 60)
				grade[i] = 'F';
			else if (average_students[i] < 70)
				grade[i] = 'D';
			else if (average_students[i] < 80)
				grade[i] = 'C';
			else if (average_students[i] < 90)
				grade[i] = 'B';
			else
				grade[i] = 'A';
		}
		for (int k = 0; k < 3; k++)
		{
			for (int l = 0; l < 5; l++)
			{
				sum_class[k] += jumsu[l][k];
			}
			average_class[k] = sum_class[k] / 5.0;
		}
		System.out.printf("Korean - Sum %d, Average %.1f\n", sum_class[0], average_class[0]);
		System.out.printf("English - Sum %d, Average %.1f\n", sum_class[1], average_class[1]);
		System.out.printf("Math - Sum %d, Average %.1f\n", sum_class[2], average_class[2]);
		for (int l = 0; l < 5; l++)
			System.out.printf("#%d Student - Sum %d, Average %.1f, Grade %c\n", l + 1, sum_students[l], average_students[l], grade[l]);
	}
	public void J029()
	{
		int[] number = new int[10];
		int count;
		int	flag;
		Scanner input = new Scanner(System.in);

		flag = 0;
		for (count = 0; count < 10; count++)
		{
			System.out.print("Enter #" + (count + 1) + " number > ");
			number[count] = input.nextInt();
			for (int j = 0; j < count; j++)
			{
				if (number[j] == number[count]) {
					System.out.println("Duplicated! Retry.");
					flag = 1;
				}
			}
			if (flag == 1)
			{
				count--;
				flag = 0;
			}
		}
		System.out.print("Numbers - ");
		for (int k = 0; k < 10; k++)
			System.out.print(number[k] + " ");
	}
	public void	J030()
	{
		String[] names = {"James", "David", "Simon", "Peter", "Jason"};
		int[][] sheet = new int[5][10];
		int[] answer = {1, 2, 3, 4, 1, 2, 3, 4, 3, 2};
		int[] grade = new int[5];
		int[] wrong = new int[5];
		int count;
		Scanner input = new Scanner(System.in);

		for (int i = 0; i < 5; i++)
			for (int j = 0; j < 10; j++)
				sheet[i][j] = input.nextInt();
		for (int k = 0; k < 5; k++)
		{
			for (int l = 0; l < 10; l++)
			{
				if (sheet[k][l] != answer[l])
					wrong[k]++;
			}
			if (wrong[k] < 2)
				grade[k] = 1;
			else if (wrong[k] < 4)
				grade[k] = 2;
			else
				grade[k] = 3;
		}
		count = 0;
		System.out.print("1st : ");
		for (int k = 0; k < 5; k++)
		{
			if (grade[k] == 1)
			{
				System.out.print(names[k] + " ");
				count++;
			}
		}
		System.out.printf("(%d)\n", count);
		System.out.print("2nd : ");
		count = 0;
		for (int k = 0; k < 5; k++)
		{
			if (grade[k] == 2)
			{
				System.out.print(names[k] + " ");
				count++;
			}
		}
		System.out.printf("(%d)\n", count);
		System.out.print("Fail : ");
		count = 0;
		for (int k = 0; k < 5; k++) {
			if (grade[k] == 3) {
				System.out.print(names[k] + " ");
				count++;
			}
		}
		System.out.printf("(%d)\n", count);
	}
}
