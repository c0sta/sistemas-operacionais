import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;

public class OSProcess {
	public static void main(String[] args) throws IOException {
		if (args.length != 1) {
			System.err.println("Usage: Java OSProcess <Command>");
			System.exit(0);
		}
		// args[0] is the command
		ProcessBuilder pb = new ProcessBuilder(args[0]);
		Process proc = pb.start();
		
		// obtain the input stream
		InputStream is = proc.getInputStream();
		InputStreamReader isr = new InputStreamReader(is);
		BufferedReader br = new BufferedReader(isr);
		
		// read what is returned by the command
		String line;
		while ((line = br.readLine()) != null) {
			System.out.println(line);
		}
		br.close();
	}
}
