import java.util.Random;

public class MakePW {
	char[] PW;
	public MakePW() {
		PW = new char[20];
		Random r = new Random();

		for (int i = 0; i < PW.length; i++) {
			int tmp;
			tmp = r.nextInt(127);
			PW[i] = (char)tmp;
			if ((int)PW[i] < 32)	//non-printable
				i--;
		}
	}
	public void make(int length)
	{
		PW = new char[length];
		Random r = new Random();

		for (int i = 0; i < PW.length; i++) {
			int tmp;
			tmp = r.nextInt(127);
			PW[i] = (char)tmp;
			if (PW[i] < 32)	//non-printable
				i--;
		}
	}
	public void makeCode(int length1, int length2)
	{
		PW = new char[length1 + length2];
		Random r = new Random();
		for (int i = 0; i < length1; i++) {
			int tmp;
			tmp = r.nextInt(127);
			PW[i] = (char)tmp;
			if (!(tmp >= 65 && tmp <= 90))
				i--;
		}
		for (int i = length1; i < length1 + length2; i++) {
			int tmp;
			tmp = r.nextInt(127);
			PW[i] = (char)tmp;
			if (!(tmp >= 48 && tmp <= 57) || (i == length1 && tmp == 48))
				i--;
		}
	}
}
