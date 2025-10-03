public class PowerTypeInfo {
    private String sourceType;
    private int wattage;

    public void setSourceType(String st) { sourceType = st; }
    public String getSourceType() { return sourceType; }

    public void setWattage(int w) { wattage = w; }
    public int getWattage() { return wattage; }

    public void printPowerSource() {
        System.out.println("--- Power Type Info ---");
        System.out.println("Source Type: " + sourceType);
        System.out.println("Wattage: " + wattage + " W");
    }
}
