import java.time.format.DateTimeFormatter;

public class datetime_convert {
    public static void main(String[] args) {
        // Store selected date and time in string
        String dateStr = "2022-03-17 10:45:30";
        
        // Format date-time string using specified pattern
        DateTimeFormatter formatter = DateTimeFormatter.ofPattern("yyyy-MM-dd HH:mm:ss");
        LocalDateTime dateObj = LocalDateTime.parse(dateStr, formatter);
        String formattedDate = dateObj.format(DateTimeFormatter.ofPattern("MM/dd/yyyy HH:mm:ss"));

        // Output formatted date-time string
        System.out.println(formattedDate);
    }
}
