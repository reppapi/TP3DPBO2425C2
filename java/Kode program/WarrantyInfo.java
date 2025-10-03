public class WarrantyInfo {
    private String duration;           // fleksibel (misal "5 years", "3 bulan")
    private String coverageDetails;

    public void setDuration(String d) { duration = d; }
    public String getDuration() { return duration; }

    public void setCoverageDetails(String c) { coverageDetails = c; }
    public String getCoverageDetails() { return coverageDetails; }

    public void printWarranty() {
        System.out.println("--- Warranty Info ---");
        System.out.println("Duration: " + duration);
        System.out.println("Coverage Details: " + coverageDetails);
    }
}
