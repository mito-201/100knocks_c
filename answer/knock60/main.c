#include <stdio.h>
#include <gtk/gtk.h>
// gcc `pkg-config --cflags gtk+-3.0` main.c `pkg-config --libs gtk+-3.0`
// https://docs.gtk.org/gtk3/

static void activate( GtkApplication* app, gpointer user_data) {
    GtkWidget *window;

    window = gtk_application_window_new (app);
    gtk_window_set_title (GTK_WINDOW (window), "knock60");
    gtk_window_set_default_size (GTK_WINDOW (window), 300, 300);
    gtk_widget_show_all (window);
}

int main (int argc, char **argv) {
    GtkApplication *app;
    int status;

    app = gtk_application_new ("org.gtk.example", G_APPLICATION_FLAGS_NONE);
    g_signal_connect (app, "activate", G_CALLBACK (activate), NULL);
    status = g_application_run (G_APPLICATION (app), argc, argv);
    g_object_unref (app);

    int cx, cy;
    printf("円の中心座標を入力: ");
    scanf("%d %d", &cx, &cy);



    return status;
}