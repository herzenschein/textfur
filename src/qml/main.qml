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
                    fieldPlaceholder: "Initial"
                    readOnly: true
                    canFocus: false

                    onFieldTextChanged: Character.comfyvar = parseInt(fieldText)
                }

                TextRow {
                    Layout.fillWidth: true

                    labelText: "Name"
                    fieldPlaceholder: "Your name here"

                    onFieldTextChanged: Character.name = fieldText
                }

                TextRow {
                    Layout.fillWidth: true

                    labelText: "Species"
                    fieldPlaceholder: "Rabbit"

                    onFieldTextChanged: Character.species = fieldText
                }

                Frame {
                    Layout.fillWidth: true
                    Layout.fillHeight: true

                    ScrollView {
                        anchors.fill: parent

                        TextArea {
                            text: "You are at home."
                            readOnly: true
                            horizontalAlignment: Text.AlignHCenter

                            onActiveFocusChanged: {
                                focus = false
                            }
                        }
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
                        id: area
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

                    onEditingFinished: {
                        area.append(input.text)
                        input.clear()
                    }

                    Component.onCompleted: {
                        forceActiveFocus()
                    }
                }
            }
        }
    }
}
