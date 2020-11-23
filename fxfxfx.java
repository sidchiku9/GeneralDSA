import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

public class Register extends HttpServlet{
	public void doPost(HttpServletRequest request, HttpServletResponse response) throws IOException {
		String fname = request.getParameter("firstName");
		String lname = request.getParameter("lastName");
		String uname = request.getParameter("userName");
		String password = request.getParameter("password");
		String address = request.getParameter("address");
		String contactNo = request.getParameter("contactNo");
		
		
		if(uname.equals("sidchiku9") && password.equals("chikusid9")) {
		System.out.println("Registration successful!");
		System.out.println("User Details : ");
		System.out.println("First Name : " + fname);
		System.out.println("Last Name : " + lname);
		System.out.println("UserName : " + uname);
		System.out.println("Password : " + password);
		System.out.println("Address : " + address);
		System.out.println("Contact Number : " + contactNo);
		}else {
			System.out.println("Not verified");
		}
	}
}
