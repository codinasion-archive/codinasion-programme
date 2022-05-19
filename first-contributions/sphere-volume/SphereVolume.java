import java.text.DecimalFormat;

public class SphereVolume{
	private static final DecimalFormat df = new DecimalFormat("0.00");

	public static void main(String[] args){
		// 4/3 will mess up the calculation.
		// 4.0/3.0 gives correct answer
		double volume = Math.pow(8,3) * Math.PI * (4.0/3.0);
		System.out.println("Volume: " + df.format(volume));
	}	
}

