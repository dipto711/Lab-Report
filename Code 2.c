public class Rectangle {
    private double length;
    private double width;

    public Rectangle(double length, double width) {
        this.length = length;
        this.width = width;
    }

    public double calculatePerimeter() {
        return 2 * (length + width);
    }

    public double calculateArea() {
        return length * width;
    }

    public static void main(String[] args) {
        Rectangle rectangle1 = new Rectangle(5, 4);
        Rectangle rectangle2 = new Rectangle(7, 3);

        System.out.println("Rectangle 1:");
        System.out.println("Perimeter: " + rectangle1.calculatePerimeter());
        System.out.println("Area: " + rectangle1.calculateArea());

        System.out.println("\nRectangle 2:");
        System.out.println("Perimeter: " + rectangle2.calculatePerimeter());
        System.out.println("Area: " + rectangle2.calculateArea());
    }
}
