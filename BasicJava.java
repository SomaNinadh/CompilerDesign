public class Main {
    public static void main(String[] args) {
        // Creating an object of MyClass
        MyClass obj = new MyClass();

        // Accessing the member variables and methods of MyClass
        obj.setNumber(10);
        int num = obj.getNumber();
        System.out.println("Number: " + num);

        obj.displayMessage();
    }
}

class MyClass {
    // Member variable
    private int number;

    // Setter method
    public void setNumber(int num) {
        number = num;
    }

    // Getter method
    public int getNumber() {
        return number;
    }

    // Method to display a message
    public void displayMessage() {
        System.out.println("Hello from MyClass!");
    }
}

//output: 10 Hello from my class
