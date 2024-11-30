import javax.swing.JOptionPane;
public class ConsoleDialogInput {
   public static void main(String args[])     {
         String name = JOptionPane.showInputDialog("Enter your name: "); 
         
         String ageString = JOptionPane.showInputDialog("Enter your age: "); 
         int age = Integer.parseInt(ageString);
      
         String gender = JOptionPane.showInputDialog("Enter your gender: ");
      
         String heightString = JOptionPane.showInputDialog("Enter your height: "); 
         double height = Double.parseDouble(heightString);
      
         String output = "Hello! " + "\nYour name is " + name + "\nYour age is " + age +
            "\nYour gender is " + gender + "\nYour height is " + height;
         JOptionPane.showMessageDialog(null, output, "Message", 		JOptionPane.INFORMATION_MESSAGE);
      }								
   }

