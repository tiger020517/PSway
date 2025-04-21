import java.util.Scanner;

public class Main7 {
	public static void main(String[] args)
	{
		Main7 main = new Main7();
		main.J045();
	}
	public void J041()
	{
		Lotto lotto = new Lotto();

		lotto.printNumbers();
		lotto.remakeAuto();
		lotto.printNumbers();
	}
	public void J042()
	{
		Lotto lotto = new Lotto();
		lotto.printNumbers();
		lotto.remake();
		lotto.printNumbers();
	}

	public void J043()
	{
		int[] check = new int[6];
		Scanner scan = new Scanner(System.in);
		int	tmp;

		Lotto lotto = new Lotto();
		lotto.printNumbers();
		lotto.remake();
		lotto.printNumbers();
		for (int i = 0; i < 6; i++)
		{
			System.out.print("금주의 " + (i + 1) + "번째 당첨번호: ");
			tmp = scan.nextInt();
			check[i] = tmp;
			if (check[i] < 1 || check[i] > 45)
			{
				System.out.println("중복되지 않는 1 ~ 45사이의 정수를 입력해주세요");
				i--;
			}
			for (int j = 0; j < i; j++)
			{
				if (check[j] == check[i])
				{
					System.out.println("금주의 번호가 중복됩니다!");
					i--;
					break ;
				}
			}

		}
		lotto.checkLotto(check);
	}
	public void J044()
	{
		Scanner scan = new Scanner(System.in);
		int size;

		MakePW pw = new MakePW();
		for (int i = 0; i < pw.PW.length; i++)
			System.out.print(pw.PW[i]);
		System.out.println();
		System.out.print("새로 생성 할 PW의 length를 주세요: ");
		size = scan.nextInt();
		pw.make(size);
		for (int i = 0; i < pw.PW.length; i++)
			System.out.print(pw.PW[i]);
		System.out.println();
	}
	public void J045()
	{
		Scanner scan = new Scanner(System.in);
		int size1, size2;
		MakePW pw = new MakePW();

		System.out.print("알파벳 대문자의 개수를 입력하시오: ");
		size1 = scan.nextInt();
		System.out.print("숫자의 개수를 입력하시오: ");
		size2 = scan.nextInt();
		pw.makeCode(size1, size2);
		for (int i = 0; i < pw.PW.length; i++)
			System.out.print(pw.PW[i]);
		System.out.println();
	}
	public void J046()
	{
		String str1;
		String str2;
		Scanner scan = new Scanner(System.in);

		str1 = scan.nextLine();
		str2 = scan.nextLine();
		MyString.whichFirst(str1, str2);

	}
	public void J047()
	{
		Scanner scan = new Scanner(System.in);
		String str;

		str = scan.nextLine();
		str = MyString.removeSpaces(str);
		System.out.println(str);
	}
	public void J048()
	{
		Scanner scan = new Scanner(System.in);
		String str;

		str = scan.nextLine();
		str = MyString.findLongest(str);
		System.out.println(str + " " + str.length());
	}
}

