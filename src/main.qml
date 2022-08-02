import QtQuick
import QtQuick.Layouts
import QtQuick.Controls
import QtQuick.Controls.Material

ApplicationWindow {
    title: "Textfur"
    visible: true
    height: 500
    width: 700
    Material.theme: Material.Dark

    RowLayout {
        anchors.fill: parent
        Frame {
            Layout.fillHeight: true
            Layout.fillWidth: true
            GridLayout {
                anchors.fill: parent
                columns: 2
                Label {
                    Layout.columnSpan: 2
                    Layout.alignment: Qt.AlignTop | Qt.AlignHCenter

                    text: "TEXTGAME"
                }

                Label {
                    Layout.fillWidth: true

                    text: "ComfyVar"
                }
                TextField {
                    Layout.fillWidth: true

                    placeholderText: "Initial"
                }
                Label {
                    Layout.fillWidth: true

                    text: "Name"
                }
                TextField {
                    Layout.fillWidth: true

                    placeholderText: "Your name here"
                }
                Label {
                    Layout.fillWidth: true

                    text: "Species"
                }
                TextField {
                    Layout.fillWidth: true

                    placeholderText: "Rabbit"
                }
                TextArea {
                    Layout.columnSpan: 2
                    Layout.fillWidth: true
                    Layout.fillHeight: true

                    text: "You are at home."
                    readOnly: true
                    horizontalAlignment: Text.AlignHCenter
                }
            }
        }
        Frame {
            Layout.fillWidth: true
            Layout.fillHeight: true

            ColumnLayout {
                anchors.fill: parent

                TextArea {
                    Layout.alignment: Qt.AlignTop
                    Layout.fillWidth: true
                    Layout.fillHeight: true

                    text: "Welcome to my furry game!"
                    readOnly: true
                }
                TextField {

                    Layout.alignment: Qt.AlignBottom
                    Layout.fillWidth: true

                    focus: true
                    placeholderText: "Type here"
                }
            }
        }
    }
}
