public class MyString {
	public static int whichFirst(String str1, String str2) {
		String lostr1 = str1.toLowerCase();
		String lostr2 = str2.toLowerCase();

		if (lostr1.compareTo(lostr2) < 0)
			System.out.println(1 + " " + str1);
		else if (lostr1.compareTo(lostr2) > 0)
			System.out.println(2 + " " + str2);
		else
			System.out.println("same");
	return (lostr1.compareTo(lostr2));
	}

	public static String removeSpaces(String str) {
		String go = str.replaceAll("\\s", "");
		return (go);
	}

	public static String findLongest(String str) {
		String[] words = str.split("\\s+");
		String longest = "";
		for (String word : words) {
			if (word.length() > longest.length()) {
				longest = word;
			}
		}
		return (longest);
	}
}
