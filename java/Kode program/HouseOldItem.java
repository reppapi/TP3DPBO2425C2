public class HouseOldItem {
    private String item;
    private double price;
    private String room;

    public void setItem(String i) { item = i; }
    public String getItem() { return item; }

    public void setPrice(double p) { price = p; }
    public double getPrice() { return price; }

    public void setRoom(String r) { room = r; }
    public String getRoom() { return room; }

    public void printItem() {
        System.out.println("Item: " + item);
        System.out.println("Price: " + price);
        System.out.println("Room: " + room);
    }
}
