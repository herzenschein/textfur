import QtQuick
import QtQuick.Layouts
import QtQuick.Controls
import QtQuick.Controls.Material
import Textfur

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

            ColumnLayout {
                anchors.fill: parent

                Label {
                    Layout.alignment: Qt.AlignTop | Qt.AlignHCenter

                    text: "TEXTGAME"
                }

                TextRow {
                    Layout.fillWidth: true

                    labelText: "Test"
                    fieldText: "Test"
                }

                TextRow {
                    Layout.fillWidth: true

                    labelText: "ComfyVar"
                    fieldText: "Initial"
                }

                TextRow {
                    Layout.fillWidth: true

                    labelText: "Name"
                    fieldText: "Your name here"
                }

                TextRow {
                    Layout.fillWidth: true

                    labelText: "Species"
                    fieldText: "Rabbit"
                }

                Frame {
                    Layout.fillWidth: true
                    Layout.fillHeight: true

                    TextArea {
                        anchors.fill: parent

                        text: "You are at home."
                        readOnly: true
                        horizontalAlignment: Text.AlignHCenter
                        onActiveFocusChanged: focus = false
                    }
                }
            }
        }

        Frame {
            Layout.fillWidth: true
            Layout.fillHeight: true

            ColumnLayout {
                anchors.fill: parent

                ScrollView {
                    Layout.fillWidth: true
                    Layout.fillHeight: true

                    TextArea {
                        anchors.fill: parent
                        text: "Welcome to my furry game!"
                        readOnly: true
                        onActiveFocusChanged: focus = false
                    }
                }

                TextField {
                    id: input
                    Layout.alignment: Qt.AlignBottom
                    Layout.fillWidth: true
                    placeholderText: "Type here"
                    focus: forceActiveFocus()
                }
            }
        }
    }
}
