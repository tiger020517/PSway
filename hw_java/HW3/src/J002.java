import java.util.Scanner;

public class J002
{
	public static void main(String [] args)
	{
		double	c_degree;
		double	f_degree;
		Scanner keyboard = new Scanner (System.in);
		c_degree = keyboard.nextDouble();
		f_degree = c_degree * 1.8 + 32.0;
		System.out.printf("%.1f\n",f_degree);
		keyboard.close();
	}
}
