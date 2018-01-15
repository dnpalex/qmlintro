import QtQuick 2.0


GridView {
    id: gridView
    anchors.fill: parent
    model: myModel

    cellHeight: height / 4
    cellWidth: width / 4

    signal cellClicked(real index)

    delegate:
        Rectangle {
//            border.width: 3
//            border.color: "lightgray"
            height: gridView.cellHeight
            width: gridView.cellWidth

            Column{
                id: column
                anchors {centerIn: parent}
                spacing: 5

                Image {
                    width: 40 //gridView.width / 3
                    height: 40 //gridView.height / 3
                    source: "qrc:/assets/images/book.png"
                    anchors.horizontalCenter: parent.horizontalCenter
                    fillMode: Image.PreserveAspectCrop
                }
                Text {
                    text: fileName
                    anchors.horizontalCenter: parent.horizontalCenter
                }
            }

            MouseArea{
                id: cellMArea
                anchors.fill: parent
                onClicked: {
                    gridView.cellClicked(index)
                }
            }
    }
}
