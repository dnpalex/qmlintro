import QtQuick 2.9
import QtQuick.Window 2.3
import QtQuick.Controls 2.2

ApplicationWindow {
    visible: true
    width: 480
    height: 640
    title: "SimplestReader"

    header: Rectangle {
        id: header
        //anchors { margins: 2}
        height: 40
        color: "lightgray"
        radius: 2

        Rectangle{
            id: optionButton
            color: "black"
            anchors {right: parent.right; bottom: parent.bottom; top: parent.top; margins: 2}
            width: 30

            radius: 3
        }

        Rectangle {
            id: returnButton
            color: "black"
            anchors {left: parent.left; bottom: parent.bottom; top: parent.top; margins: 2}
            width: 30
            radius: 3
        }
    }

    StackView {
        id: stackView
        anchors { margins: 3}
        initialItem: fileGridView
        anchors.fill: parent
    }

    FileGridView{
        id: fileGridView
    }
}
