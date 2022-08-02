import QtQuick
import QtQuick.Layouts
import QtQuick.Controls
import QtQuick.Controls.Material
import Textfur

ApplicationWindow {
    id: root
    title: "Textfur"
    visible: true
    minimumHeight: 300
    minimumWidth: 500
    height: 400
    width: 700
    Material.theme: Material.Dark

    RowLayout {
        anchors.fill: parent

        Frame {
            Layout.fillHeight: true
            Layout.fillWidth: true
            Layout.preferredWidth: root.width / 2

            ColumnLayout {
                anchors.fill: parent

                Label {
                    Layout.alignment: Qt.AlignTop | Qt.AlignHCenter

                    text: "TEXTGAME"
                    font.bold: true
                }

                TextRow {
                    Layout.fillWidth: true

                    labelText: "ComfyVar"
                    fieldText: "Initial"

                    onFieldTextChanged: Character.comfyvar = fieldText
                }

                TextRow {
                    Layout.fillWidth: true

                    labelText: "Name"
                    fieldText: "Your name here"

                    onFieldTextChanged: Character.name = fieldText
                }

                TextRow {
                    Layout.fillWidth: true

                    labelText: "Species"
                    fieldText: "Rabbit"

                    onFieldTextChanged: Character.species = fieldText
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
            Layout.preferredWidth: root.width / 2

            ColumnLayout {
                anchors.fill: parent

                ScrollView {
                    Layout.fillWidth: true
                    Layout.fillHeight: true

                    TextArea {
                        anchors.fill: parent
                        text: "Welcome to my furry game!"
                        readOnly: true

                        onActiveFocusChanged: {
                            focus = false
                        }
                    }
                }

                TextField {
                    id: input
                    Layout.alignment: Qt.AlignBottom
                    Layout.fillWidth: true
                    placeholderText: "Type here"

                    Component.onCompleted: {
                        forceActiveFocus()
                    }
                }
            }
        }
    }
}
