import java.util.Scanner;
public class J001
{
	public static void main(String [] args)
	{
		int	height, weight;
		double	bmi;
		Scanner keyboard = new Scanner (System.in);
		height = keyboard.nextInt();
		weight = keyboard.nextInt();
		bmi = weight / ((height * height) / 10000.0);
		System.out.printf("%.1f\n",bmi);
		keyboard.close();
	}
}
