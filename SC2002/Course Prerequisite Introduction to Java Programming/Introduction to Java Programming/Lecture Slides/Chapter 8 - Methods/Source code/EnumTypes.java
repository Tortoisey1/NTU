public class EnumTypes 
{
	enum Day {Sun, Mon, Tue, Wed, Thu, Fri, Sat};

	public static void main(String[] args)
	{
		Day yesterday, today, tomorrow;

		yesterday = Day.Mon;
		today = Day.Tue;
		tomorrow = Day.Wed;

		System.out.println("yesterday name = "+yesterday.name());
		System.out.println("yesterday ordinal = " + yesterday.ordinal());
		System.out.println("today name = " + today.name());
		System.out.println("today ordinal = " + today.ordinal());
		System.out.println("tomorrow name = " + tomorrow.name());
		System.out.println("tomorrow ordinal = " + tomorrow.ordinal());
	} 

} 


