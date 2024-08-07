#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);

    player = new QMediaPlayer(this);
    audioOutput = new QAudioOutput(this);
    audioOutput->setVolume(0.4); // Volume is from 0.0 to 1.0
    player->setAudioOutput(audioOutput);

    // Connect the buttons to their respective slots

    // downtown = http://stream.revma.ihrhls.com/zc5235
    connect(ui->downtown, &QPushButton::clicked, this, &MainWindow::playDowntown);

    // classic = http://live365-aac.cdnstream1.com/a83704_64aac
    connect(ui->classic, &QPushButton::clicked, this, &MainWindow::playClassic);
    // Set the audio file to play

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::playDowntown()
{
    QUrl streamUrl("http://stream.revma.ihrhls.com/zc5235");
    player->setSource(streamUrl);
    audioOutput->setVolume(0.6);
    if (player->source() == streamUrl) {
        qDebug() << "Downtown stream URL set successfully.";
        player->play();
    } else {
        qDebug() << "Failed to set Downtown stream URL.";
    }
}

void MainWindow::playClassic()
{
    QUrl streamUrl("http://live365-aac.cdnstream1.com/a83704_64aac");
    player->setSource(streamUrl);
    audioOutput->setVolume(0.3);
    if (player->source() == streamUrl) {
        qDebug() << "Classic stream URL set successfully.";
        player->play();
    } else {
        qDebug() << "Failed to set Classic stream URL.";
    }
}
