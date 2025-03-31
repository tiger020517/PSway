import java.util.Scanner;

public class J005
{
	public static void main(String [] args)
	{
		int mon, day;
		int[] days = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
		int idx;
		int out = 0;
		
		Scanner scanner = new Scanner(System.in);
		mon = scanner.nextInt();
		day = scanner.nextInt();
		idx = 0;
		while (++idx < mon) {
			out += days[idx];
		}
		out += day;
		System.out.println(out);
		scanner.close();
	}
}
