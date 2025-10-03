class RoomInfo:
    def __init__(self):
        self.roomName = ""
        self.floorLevel = 0

    def setRoomName(self, rn):
        self.roomName = rn

    def getRoomName(self):
        return self.roomName

    def setFloorLevel(self, fl):
        self.floorLevel = fl

    def getFloorLevel(self):
        return self.floorLevel

    def printRoom(self):
        print("=== Room Info ===")
        print(f"Room Name: {self.roomName}")
        print(f"Floor Level: {self.floorLevel}")
