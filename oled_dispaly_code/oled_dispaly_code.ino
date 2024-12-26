#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// Define the screen size (adjust according to your OLED model)
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

// I2C address of the OLED (commonly 0x3C)
#define OLED_I2C_ADDRESS 0x3C

// Initialize the OLED display object
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {
  // Start serial communication for debugging
  Serial.begin(9600);

  // Initialize the display with the correct I2C address
  if (!display.begin(SSD1306_SWITCHCAPVCC, OLED_I2C_ADDRESS)) { // Correct initialization
    Serial.println(F("SSD1306 allocation failed"));
    for (;;); // Infinite loop if initialization fails
  }

  display.clearDisplay(); // Clear the display buffer
  display.setTextSize(1); // Text size
  display.setTextColor(SSD1306_WHITE); // Text color
  display.setCursor(0, 10); // Set cursor position (x, y)

  // Display text
  display.println("Hello, mari muthu");
  display.println("how was today");
  display.println("that today you're looking so pretty");
  display.display(); // Send the buffer to the display

  delay(2000); // Pause for 2 seconds
}

void loop() {
  // Add additional functionality if needed
}