public class RoomInfo {
    private String roomName;
    private int floorLevel;

    public void setRoomName(String rn) { roomName = rn; }
    public String getRoomName() { return roomName; }

    public void setFloorLevel(int fl) { floorLevel = fl; }
    public int getFloorLevel() { return floorLevel; }

    public void printRoom() {
        System.out.println("=== Room Info ===");
        System.out.println("Room Name: " + roomName);
        System.out.println("Floor Level: " + floorLevel);
    }
}
