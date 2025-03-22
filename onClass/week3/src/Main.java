import java.util.Scanner;

	public class Main {
		public void main(String[] args)
		{
			j004();
		}
		public void	j001()
		{
			int height, weight;
			double bmi;
			Scanner keyboard = new Scanner(System.in);
			height = keyboard.nextInt();
			weight = keyboard.nextInt();
			bmi = weight / (height * height * 0.0001);
			System.out.println(bmi);
			keyboard.close();
		}
		public void	j002()
		{
			double c_degree, f_degree;

			Scanner in = new Scanner(System.in);
			c_degree = in.nextDouble();
			f_degree = c_degree * 1.8 + 32;

			f_degree = Math.round(f_degree * 10.0) / 10.0;
			System.out.println(f_degree);
			in.close();
		}
		public void	j003()
		{
			double m2_area;
			double pyung_area;

			Scanner m2 = new Scanner(System.in);
			m2_area = m2.nextDouble();
			pyung_area = m2_area / 3.305;
			m2.close();
			System.out.println(pyung_area);
		}
		public void	j004()
		{
			double x1, y1;
			double x2, y2;

			Scanner x = new Scanner(System.in);
			
			System.out.println(java.lang.Math.sqrt(Math.pow(x2 - x1, 2) + Math.pow(y2 - y1, 2)));
		}
	}
