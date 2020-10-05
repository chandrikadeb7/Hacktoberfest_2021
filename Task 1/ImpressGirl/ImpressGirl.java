import java.awt.AWTException;
import java.awt.Robot;
import java.awt.event.KeyEvent;
import java.util.Scanner;

public class ImpressGirl {
    Robot robot = new Robot();
    Scanner scanner;

    public static void main(String[] args) throws AWTException {
        new ImpressGirl();
    }

    public ImpressGirl() throws AWTException {
        scanner = new Scanner(System.in);

        String get;

        System.out.print("\nType 'notepad' to go ahead (System will crash if you will type something else) :- ");
        get = scanner.next();

        robot.setAutoDelay(50);
        robot.setAutoWaitForIdle(true);

        robot.delay(100);
        robot.keyPress(KeyEvent.VK_WINDOWS);
        robot.delay(500);
        type("R");
        robot.delay(500);
        robot.keyRelease(KeyEvent.VK_WINDOWS);

        robot.delay(500);
        type(get);
        robot.delay(1000);
        type(KeyEvent.VK_ENTER);

        robot.delay(5000);

        type("Hello to everyone...!!");

        type(KeyEvent.VK_ENTER);
        robot.delay(50);
        type(KeyEvent.VK_ENTER);

        robot.delay(100);
        type("I want to tell you something...");
        type(KeyEvent.VK_ENTER);
        type(KeyEvent.VK_ENTER);

        robot.delay(100);
        type("Express your love here....");
        type(KeyEvent.VK_ENTER);
        type(KeyEvent.VK_ENTER);
        robot.delay(100);

        type("I love you and I will be with you forever.");
        type(KeyEvent.VK_ENTER);
        type(KeyEvent.VK_ENTER);

        robot.delay(100);
        type("Will you be my valentine, Will you marry me");
        robot.keyPress(KeyEvent.VK_SHIFT);
        type(KeyEvent.VK_SLASH);
        robot.keyRelease(KeyEvent.VK_SHIFT);
        type(KeyEvent.VK_ENTER);
        type(KeyEvent.VK_ENTER);
        type("I will wait for you... Forever..");

        robot.delay(500);
        robot.keyPress(KeyEvent.VK_CONTROL);

        type("s");
        robot.keyRelease(KeyEvent.VK_CONTROL);

        robot.delay(1000);
        type("pratik");
        robot.delay(500);
        type(KeyEvent.VK_ENTER);

        robot.delay(1000);
        type("y");
        robot.delay(1000);

        robot.delay(1000);
        type(KeyEvent.VK_ALT);
        robot.delay(1000);
        type("f");
        robot.delay(1000);
        type("x");

        type("n");

        System.exit(0);
    }

    private void type(int i) {
        robot.delay(50);
        robot.keyPress(i);
        robot.keyRelease(i);
    }

    private void type(String s) {
        byte[] bytes = s.getBytes();
        for (byte b: bytes) {
            int code = b;
            // key-code only handles [A-Z] (which is ASCII decimal [65-90])
            if (code > 96 && code < 123) code = code - 32;
            robot.delay(40);
            robot.keyPress(code);
            robot.keyRelease(code);
        }
    }
}
