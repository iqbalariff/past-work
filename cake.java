/*Aizat Bin Mohd Yunus
 2019218746
 Mohamad Iqbal Ariff Bin Mazri
 2019294604 */
import java.util.Scanner;

public class cake
{
    public static void main (String[]args)
    {
       Scanner sc = new Scanner (System.in);
       
       String name, categoryCode, categoryDescription="";
       String productDescription="";
       char productCode;
       double price=0.0, pricetotal=0.0, distance;
       int quantity ,stop;
       
       System.out.print("Enter any number to continue. Enter 0 to stop the program: ");
       stop = sc.nextInt();
       
       while(stop!=0)
       {
           System.out.print("Enter your name: ");
           sc.nextLine();
           name=sc.nextLine();
           System.out.print("Enter category code (NP456/BS123): ");
           categoryCode=sc.nextLine();
           System.out.print("Enter product code[(P/E)or(F/B)]: ");
           productCode=sc.next().charAt(0);
           System.out.print("Enter number of quantity: ");
           quantity=sc.nextInt();
           System.out.print("Enter distance: ");
           distance=sc.nextDouble();
           
           if(categoryCode.equals("NP456"))
            {
                categoryDescription ="New Product";
                if(productCode == 'P')
                {
                    productDescription = "Promising Love";
                    price=158.50*quantity;
                }
                else if(productCode == 'E')
                {
                    productDescription = "Endless Love";
                    price=198.50*quantity;
                }
            }
            
            else if (categoryCode.equals("BS123"))
            {
                categoryDescription = "Best Seller";
                if(productCode=='F')
                {
                    productDescription= "Ferrero Chocolate Foil Balloon";
                    price=158.50*quantity;
                }
                else if(productCode=='B')
                {
                    productDescription = "Birthday Cake Mania";
                    price=188.50*quantity;
                }
            }
            
            if(distance>20 || distance<=80)
            {
                price=price + ((distance-20)*0.1);
            }
            else if(distance>100)
            {
                price = price + ((distance-20)*0.1)+((distance-80)*0.2);
            }
            
            pricetotal = pricetotal + price;
            
            System.out.println("\nWELCOME TO HARMONY GIFT SHOP - " + name);
            System.out.println("    You have purchased: " + productDescription);
            System.out.println("    Categoty          : "+ categoryDescription);
            System.out.println("    Quantity          : "+ quantity);
            System.out.println("    You should pay    : RM" + price);
     
            System.out.print("\nEnter any number to continue. Enter 0 to stop the program: ");
            stop = sc.nextInt();
        }
        
        System.out.print("\nTotal payment collected by Harmony Gift shop is RM" + pricetotal);
    }
}