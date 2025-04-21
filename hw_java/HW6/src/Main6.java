import java.util.Scanner;

public class Main6 {
	public static void main(String[] args)
	{
		Main6 main = new Main6();
		main.J035();
		main.J035();
		main.J035();
	}
	public void J031()
	{
		String userid;
		String password;
		String name;
		Scanner sc = new Scanner(System.in);

		userid = sc.nextLine();
		password = sc.nextLine();
		name = sc.nextLine();
		if (password.length() < 3)
		{
			System.out.println("Error! password is to short.\n");
			return ;
		}
		System.out.printf("User id: %s\n", userid);
		System.out.printf("Password: ");
		for (int i = 0; i < password.length(); i++)
		{
			if (i < 2)
				System.out.printf("%c", password.charAt(i));
			else
				System.out.printf("*");
		}
		System.out.printf("\n");
		System.out.printf("Name: %s\n", name);
	}
	public void J032()
	{
		String str;
		Scanner sc = new Scanner(System.in);

		str = sc.nextLine();
		StringBuilder reverse = new StringBuilder(str);
		reverse.reverse();
		System.out.println(reverse);
	}
	public void J033()
	{
		int		count;
		String	name;
		String	longest, shortest;
		Scanner sc = new Scanner(System.in);

		count = sc.nextInt();
		sc.nextLine();
		name = sc.nextLine();
		longest = name;
		shortest = name;
		for (int i = 1; i < count; i++)
		{
			name = sc.nextLine();
			if (name.length() > longest.length())
				longest = name;
			if (name.length() < shortest.length())
				shortest = name;
		}
		System.out.println("Longest: " + longest);
		System.out.println("Shortest: " + shortest);
	}
	public void J034()
	{
		String[] usernames = {"kim", "lee", "park", "hong", "choi"};
		String[] passwords = {"1111", "1234", "3456", "3535", "7777"};
		String in;
		Scanner sc = new Scanner(System.in);

		in = sc.nextLine();
		for (int i = 0; i < 5; i++)
		{
			if (in.equals(usernames[i]))
			{
				in = sc.nextLine();
				if (in.equals(passwords[i]))
				{
					System.out.println("Login OK!");
					return ;
				}
				else
				{
					System.out.println("Incorrect password!");
					return ;
				}
			}
		}
		in = sc.nextLine();
		System.out.println("No user!");
		return ;
	}
	public void J035()
	{
		Scanner	sc = new Scanner(System.in);
		String	in;
		int		num;

		in = sc.nextLine();
		num = 0;
		num += Integer.parseInt(in.substring(0, 1));
		num += Integer.parseInt(in.substring(1, 2));
		num += Integer.parseInt(in.substring(2, 3));
		num += Integer.parseInt(in.substring(3, 4));
		num += Integer.parseInt(in.substring(4, 6));
		num += Integer.parseInt(in.substring(6, 8));
		System.out.println(num);
	}
}
