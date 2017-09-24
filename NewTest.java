class Test
{
      enum TestResult{ PASS, FAIL}
      TestResult Result;	
}

public class NewTest
{
	public static void main(String []args)
	{
	    Test Mark = new Test();
	    Mark.Result = Test.TestResult.PASS;
            System.out.println("Result: " + Mark.Result);  	 
	}
}
