class Money 
{
     enum MoneyWorth{SMALL,MEDIUM,LARGE}
     MoneyWorth currency; 
}


public class MoneyTest
{
	public static void main(String []args)
	{
	    Money Enum =  new Money();
	    Enum.currency = Money.MoneyWorth.MEDIUM;
	    System.out.println("Money Value: " +Enum.currency);
	} 
}
