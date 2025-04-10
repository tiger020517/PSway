import java.util.Scanner;

public class Main6 {
	public static void main(String[] args)
	{
		Main6 main = new Main6();
		main.J032();
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

}
