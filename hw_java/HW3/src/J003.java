import java.util.Scanner;

public class J003
{
	public static void main(String [] args)
	{
		double m2_area;
		double pyung_area;

		Scanner m2 = new Scanner(System.in);
		m2_area = m2.nextDouble();
		pyung_area = m2_area / 3.305;
		m2.close();
		System.out.printf("%.1f",pyung_area);
	}
}
