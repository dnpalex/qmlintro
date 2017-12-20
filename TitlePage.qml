import QtQuick 2.0

Item {
    GridView {
        id: gridView
        anchors.fill: parent
        model: myModel


        delegate: Text { text: "Format: " + format }
        cellWidth: 70
    }

}
