import QtQuick 2.9
import QtQuick.Window 2.3
import QtQuick.Controls 2.2

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: "SimplestReader"

    StackView {
        id: stackView
        initialItem: titlePage
        anchors.fill: parent
    }

    TitlePage{
        id: titlePage
    }
}
