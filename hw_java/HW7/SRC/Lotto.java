import java.util.Arrays;
import java.util.Random;
import java.util.Scanner;

public class Lotto
{
	int[] numbers;

	public Lotto()
	{
		numbers = new int[6];
		int tmp;
		Random rand = new Random();
		for (int i = 0; i < numbers.length; i++)
		{
			numbers[i] = rand.nextInt(45) + 1;
			for (int j = 0; j < i; j++)
			{
				if (numbers[j] == numbers[i])
				{
					i--;
					break ;
				}
			}
		}
		for (int i = 0; i < numbers.length; i++)
		{
			for (int j = i; j < numbers.length; j++)
			{
				if (numbers[i] > numbers[j])
				{
					tmp = numbers[i];
					numbers[i] = numbers[j];
					numbers[j] = tmp;
				}
			}
		}
	}
	public void printNumbers()
	{
		for (int i = 0; i < numbers.length; i++)
			System.out.print(numbers[i] + " ");
		System.out.println();
	}
	public void remakeAuto()
	{
		Arrays.fill(numbers, 0);
		int tmp;
		Random rand = new Random();
		for (int i = 0; i < numbers.length; i++)
		{
			numbers[i] = rand.nextInt(45) + 1;
			for (int j = 0; j < i; j++)
			{
				if (numbers[j] == numbers[i])
				{
					i--;
					break ;
				}
			}
		}
		for (int i = 0; i < numbers.length; i++)
		{
			for (int j = i; j < numbers.length; j++)
			{
				if (numbers[i] > numbers[j])
				{
					tmp = numbers[i];
					numbers[i] = numbers[j];
					numbers[j] = tmp;
				}
			}
		}
	}
	public void remake()
	{
		numbers = new int[6];
		int tmp;
		Scanner sc = new Scanner(System.in);

		Arrays.fill(numbers, 0);
		for (int i = 0; i < numbers.length; i++)
		{
			System.out.print((i + 1) + "번째 수: ");
			tmp = sc.nextInt();
			numbers[i] = tmp;
			if (numbers[i] < 1 || numbers[i] > 45)
			{
				System.out.println("중복되지 않는 1 ~ 45사이의 정수를 입력해주세요");
				i--;
			}
			for (int j = 0; j < i; j++)
			{
				if (numbers[j] == tmp)
				{
					System.out.println("중복된 숫자입니다.");
					i--;
					break ;
				}
			}
		}
		for (int i = 0; i < numbers.length; i++)
		{
			for (int j = i; j < numbers.length; j++)
			{
				if (numbers[i] > numbers[j])
				{
					tmp = numbers[i];
					numbers[i] = numbers[j];
					numbers[j] = tmp;
				}
			}
		}
	}
	public void checkLotto(int[] check)
	{
		int	correct = 0;
		if (check.length != 6)
		{
			System.out.println("6개의 숫자를 입력해주세요");
			return ;
		}
		for (int i = 0; i < check.length; i++)
		{
			if (check[i] == numbers[i])
				correct++;
		}
		if (correct >= 3)
			System.out.println("당첨!!!");
		else
			System.out.println("꽝!!!");
	}
}