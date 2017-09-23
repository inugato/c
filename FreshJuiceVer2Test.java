class FreshJuice
{
     enum FreshJuiceSize{SMALL,MEDIUM,LARGE}
     FreshJuiceSize size;
}


class FreshJuiceVer2Test
{
	public static void main(String []args)
	{
	   FreshJuice Juice = new FreshJuice();
	   Juice.size = FreshJuice.FreshJuiceSize.LARGE;
	   System.out.println("Size :" + Juice.size); 	
	}
}
