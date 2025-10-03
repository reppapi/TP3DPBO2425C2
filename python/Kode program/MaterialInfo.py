class MaterialInfo:
    def __init__(self):
        self.type = ""
        self.qualityGrade = ""

    def setType(self, t):
        self.type = t

    def getType(self):
        return self.type

    def setQualityGrade(self, q):
        self.qualityGrade = q

    def getQualityGrade(self):
        return self.qualityGrade

    def printMaterial(self):
        print("--- Material Info ---")
        print(f"Type: {self.type}")
        print(f"Quality Grade: {self.qualityGrade}")
