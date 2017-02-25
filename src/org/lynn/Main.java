package org.lynn;

public class Main {

    static {
        System.loadLibrary("helloworld");
    }

    public native void helloworld();

    public static void main(String[] args) {

        new Main().helloworld();
    }
}
