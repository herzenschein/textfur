import QtQuick

Window {
    title: "Textfur"
    visible: true
    height: 500
    width: 500
    color: "darkgray"

    Rectangle {
        color: "white"
        anchors.centerIn: parent
        width: 300
        height: 100

        Text {
        anchors.centerIn: parent
        text: "Finally managed to learn Qt6 CMake stuff :D"
        color: "black"
        }
    }
}
