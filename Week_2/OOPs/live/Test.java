package Week_2.OOPs.live;

import Week_2.OOPs.music.Playable;
import Week_2.OOPs.music.string.Veena;
import Week_2.OOPs.music.wind.Saxophone;

public class Test {

    public static void main(String[] args) {

        // a. Create an instance of Veena and call play()
        Veena veena = new Veena();
        veena.play();

        // b. Create an instance of Saxophone and call play()
        Saxophone saxophone = new Saxophone();
        saxophone.play();

        // c. Store objects in a Playable reference and call play()
        Playable p;

        p = veena;
        p.play();

        p = saxophone;
        p.play();
    }
}