﻿<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()>
Partial Class Form1
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()>
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.  
    'Do not modify it using the code editor.
    <System.Diagnostics.DebuggerStepThrough()>
    Private Sub InitializeComponent()
        Me.components = New System.ComponentModel.Container()
        Dim ChartArea21 As System.Windows.Forms.DataVisualization.Charting.ChartArea = New System.Windows.Forms.DataVisualization.Charting.ChartArea()
        Dim Legend21 As System.Windows.Forms.DataVisualization.Charting.Legend = New System.Windows.Forms.DataVisualization.Charting.Legend()
        Dim Series21 As System.Windows.Forms.DataVisualization.Charting.Series = New System.Windows.Forms.DataVisualization.Charting.Series()
        Dim ChartArea22 As System.Windows.Forms.DataVisualization.Charting.ChartArea = New System.Windows.Forms.DataVisualization.Charting.ChartArea()
        Dim Legend22 As System.Windows.Forms.DataVisualization.Charting.Legend = New System.Windows.Forms.DataVisualization.Charting.Legend()
        Dim Series22 As System.Windows.Forms.DataVisualization.Charting.Series = New System.Windows.Forms.DataVisualization.Charting.Series()
        Dim ChartArea23 As System.Windows.Forms.DataVisualization.Charting.ChartArea = New System.Windows.Forms.DataVisualization.Charting.ChartArea()
        Dim Legend23 As System.Windows.Forms.DataVisualization.Charting.Legend = New System.Windows.Forms.DataVisualization.Charting.Legend()
        Dim Series23 As System.Windows.Forms.DataVisualization.Charting.Series = New System.Windows.Forms.DataVisualization.Charting.Series()
        Dim resources As System.ComponentModel.ComponentResourceManager = New System.ComponentModel.ComponentResourceManager(GetType(Form1))
        Dim ChartArea24 As System.Windows.Forms.DataVisualization.Charting.ChartArea = New System.Windows.Forms.DataVisualization.Charting.ChartArea()
        Dim Legend24 As System.Windows.Forms.DataVisualization.Charting.Legend = New System.Windows.Forms.DataVisualization.Charting.Legend()
        Dim Series24 As System.Windows.Forms.DataVisualization.Charting.Series = New System.Windows.Forms.DataVisualization.Charting.Series()
        Me.SerialPort1 = New System.IO.Ports.SerialPort(Me.components)
        Me.PanelConnection = New System.Windows.Forms.Panel()
        Me.ComboBoxBaudRate = New System.Windows.Forms.ComboBox()
        Me.LabelBaudRate = New System.Windows.Forms.Label()
        Me.ComboBoxPort = New System.Windows.Forms.ComboBox()
        Me.LabelConnectionTitle = New System.Windows.Forms.Label()
        Me.ButtonScanPort = New System.Windows.Forms.Button()
        Me.ButtonConnect = New System.Windows.Forms.Button()
        Me.ButtonDisconnect = New System.Windows.Forms.Button()
        Me.Timer = New System.Windows.Forms.Timer(Me.components)
        Me.PictureBoxStatusConnection = New System.Windows.Forms.PictureBox()
        Me.LabelStatus = New System.Windows.Forms.Label()
        Me.PanelHumidity = New System.Windows.Forms.Panel()
        Me.CircularProgressBarHumidity = New CircularProgressBar.CircularProgressBar()
        Me.Label1 = New System.Windows.Forms.Label()
        Me.PanelTemperature = New System.Windows.Forms.Panel()
        Me.PictureBoxPBTemp = New System.Windows.Forms.PictureBox()
        Me.LabelTempMin = New System.Windows.Forms.Label()
        Me.LabelTemperature = New System.Windows.Forms.Label()
        Me.LabelTempMax = New System.Windows.Forms.Label()
        Me.PictureBoxPBTempBack = New System.Windows.Forms.PictureBox()
        Me.LabelTemperatureTitle = New System.Windows.Forms.Label()
        Me.Panel1 = New System.Windows.Forms.Panel()
        Me.Label2 = New System.Windows.Forms.Label()
        Me.Label3 = New System.Windows.Forms.Label()
        Me.Label4 = New System.Windows.Forms.Label()
        Me.PictureBoxPBAlti = New System.Windows.Forms.PictureBox()
        Me.PictureBoxPBAltiBack = New System.Windows.Forms.PictureBox()
        Me.LabelAltitude = New System.Windows.Forms.Label()
        Me.Chart2 = New System.Windows.Forms.DataVisualization.Charting.Chart()
        Me.Chart1 = New System.Windows.Forms.DataVisualization.Charting.Chart()
        Me.Chart3 = New System.Windows.Forms.DataVisualization.Charting.Chart()
        Me.PictureBox11 = New System.Windows.Forms.PictureBox()
        Me.PictureBox10 = New System.Windows.Forms.PictureBox()
        Me.PictureBox9 = New System.Windows.Forms.PictureBox()
        Me.PictureBox7 = New System.Windows.Forms.PictureBox()
        Me.PictureBox3 = New System.Windows.Forms.PictureBox()
        Me.Info = New System.Windows.Forms.Label()
        Me.PictureBox1 = New System.Windows.Forms.PictureBox()
        Me.Label9 = New System.Windows.Forms.Label()
        Me.Label10 = New System.Windows.Forms.Label()
        Me.PictureBox4 = New System.Windows.Forms.PictureBox()
        Me.Chart4 = New System.Windows.Forms.DataVisualization.Charting.Chart()
        Me.PictureBox2 = New System.Windows.Forms.PictureBox()
        Me.Label5 = New System.Windows.Forms.Label()
        Me.Label6 = New System.Windows.Forms.Label()
        Me.PanelConnection.SuspendLayout()
        CType(Me.PictureBoxStatusConnection, System.ComponentModel.ISupportInitialize).BeginInit()
        Me.PanelHumidity.SuspendLayout()
        Me.PanelTemperature.SuspendLayout()
        CType(Me.PictureBoxPBTemp, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.PictureBoxPBTempBack, System.ComponentModel.ISupportInitialize).BeginInit()
        Me.Panel1.SuspendLayout()
        CType(Me.PictureBoxPBAlti, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.PictureBoxPBAltiBack, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.Chart2, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.Chart1, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.Chart3, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.PictureBox11, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.PictureBox10, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.PictureBox9, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.PictureBox7, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.PictureBox3, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.PictureBox1, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.PictureBox4, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.Chart4, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.PictureBox2, System.ComponentModel.ISupportInitialize).BeginInit()
        Me.SuspendLayout()
        '
        'SerialPort1
        '
        Me.SerialPort1.PortName = "COM6"
        '
        'PanelConnection
        '
        Me.PanelConnection.BackColor = System.Drawing.Color.White
        Me.PanelConnection.Controls.Add(Me.ComboBoxBaudRate)
        Me.PanelConnection.Controls.Add(Me.LabelBaudRate)
        Me.PanelConnection.Controls.Add(Me.ComboBoxPort)
        Me.PanelConnection.Controls.Add(Me.LabelConnectionTitle)
        Me.PanelConnection.Controls.Add(Me.ButtonScanPort)
        Me.PanelConnection.Controls.Add(Me.ButtonConnect)
        Me.PanelConnection.Controls.Add(Me.ButtonDisconnect)
        Me.PanelConnection.Location = New System.Drawing.Point(12, 28)
        Me.PanelConnection.Name = "PanelConnection"
        Me.PanelConnection.Size = New System.Drawing.Size(428, 126)
        Me.PanelConnection.TabIndex = 9
        '
        'ComboBoxBaudRate
        '
        Me.ComboBoxBaudRate.BackColor = System.Drawing.Color.FromArgb(CType(CType(0, Byte), Integer), CType(CType(206, Byte), Integer), CType(CType(230, Byte), Integer))
        Me.ComboBoxBaudRate.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList
        Me.ComboBoxBaudRate.FlatStyle = System.Windows.Forms.FlatStyle.Flat
        Me.ComboBoxBaudRate.Font = New System.Drawing.Font("Microsoft Sans Serif", 8.25!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.ComboBoxBaudRate.ForeColor = System.Drawing.Color.White
        Me.ComboBoxBaudRate.FormattingEnabled = True
        Me.ComboBoxBaudRate.Items.AddRange(New Object() {"9600", "14400", "19200", "38400", "57600", "115200"})
        Me.ComboBoxBaudRate.Location = New System.Drawing.Point(298, 44)
        Me.ComboBoxBaudRate.Name = "ComboBoxBaudRate"
        Me.ComboBoxBaudRate.Size = New System.Drawing.Size(121, 21)
        Me.ComboBoxBaudRate.TabIndex = 4
        '
        'LabelBaudRate
        '
        Me.LabelBaudRate.AutoSize = True
        Me.LabelBaudRate.Font = New System.Drawing.Font("Microsoft Sans Serif", 8.25!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.LabelBaudRate.ForeColor = System.Drawing.Color.FromArgb(CType(CType(0, Byte), Integer), CType(CType(206, Byte), Integer), CType(CType(230, Byte), Integer))
        Me.LabelBaudRate.Location = New System.Drawing.Point(217, 48)
        Me.LabelBaudRate.Name = "LabelBaudRate"
        Me.LabelBaudRate.Size = New System.Drawing.Size(75, 13)
        Me.LabelBaudRate.TabIndex = 3
        Me.LabelBaudRate.Text = "Baud Rate :"
        '
        'ComboBoxPort
        '
        Me.ComboBoxPort.BackColor = System.Drawing.Color.FromArgb(CType(CType(0, Byte), Integer), CType(CType(206, Byte), Integer), CType(CType(230, Byte), Integer))
        Me.ComboBoxPort.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList
        Me.ComboBoxPort.FlatStyle = System.Windows.Forms.FlatStyle.Flat
        Me.ComboBoxPort.Font = New System.Drawing.Font("Microsoft Sans Serif", 8.25!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.ComboBoxPort.ForeColor = System.Drawing.Color.White
        Me.ComboBoxPort.FormattingEnabled = True
        Me.ComboBoxPort.Location = New System.Drawing.Point(90, 45)
        Me.ComboBoxPort.Name = "ComboBoxPort"
        Me.ComboBoxPort.Size = New System.Drawing.Size(121, 21)
        Me.ComboBoxPort.TabIndex = 2
        '
        'LabelConnectionTitle
        '
        Me.LabelConnectionTitle.AutoSize = True
        Me.LabelConnectionTitle.Cursor = System.Windows.Forms.Cursors.Hand
        Me.LabelConnectionTitle.Font = New System.Drawing.Font("Microsoft Sans Serif", 12.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.LabelConnectionTitle.ForeColor = System.Drawing.Color.MediumBlue
        Me.LabelConnectionTitle.Location = New System.Drawing.Point(155, 12)
        Me.LabelConnectionTitle.Name = "LabelConnectionTitle"
        Me.LabelConnectionTitle.Size = New System.Drawing.Size(100, 20)
        Me.LabelConnectionTitle.TabIndex = 1
        Me.LabelConnectionTitle.Text = "Connection"
        '
        'ButtonScanPort
        '
        Me.ButtonScanPort.BackColor = System.Drawing.Color.LightSeaGreen
        Me.ButtonScanPort.FlatAppearance.BorderColor = System.Drawing.Color.White
        Me.ButtonScanPort.FlatAppearance.MouseDownBackColor = System.Drawing.Color.FromArgb(CType(CType(0, Byte), Integer), CType(CType(164, Byte), Integer), CType(CType(104, Byte), Integer))
        Me.ButtonScanPort.FlatAppearance.MouseOverBackColor = System.Drawing.Color.FromArgb(CType(CType(0, Byte), Integer), CType(CType(185, Byte), Integer), CType(CType(207, Byte), Integer))
        Me.ButtonScanPort.FlatStyle = System.Windows.Forms.FlatStyle.Flat
        Me.ButtonScanPort.Font = New System.Drawing.Font("Microsoft Sans Serif", 8.25!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.ButtonScanPort.ForeColor = System.Drawing.Color.White
        Me.ButtonScanPort.Location = New System.Drawing.Point(9, 43)
        Me.ButtonScanPort.Name = "ButtonScanPort"
        Me.ButtonScanPort.Size = New System.Drawing.Size(75, 23)
        Me.ButtonScanPort.TabIndex = 0
        Me.ButtonScanPort.Text = "Scan Port"
        Me.ButtonScanPort.UseVisualStyleBackColor = False
        '
        'ButtonConnect
        '
        Me.ButtonConnect.BackColor = System.Drawing.Color.FromArgb(CType(CType(79, Byte), Integer), CType(CType(193, Byte), Integer), CType(CType(115, Byte), Integer))
        Me.ButtonConnect.FlatAppearance.BorderColor = System.Drawing.Color.White
        Me.ButtonConnect.FlatAppearance.MouseDownBackColor = System.Drawing.Color.FromArgb(CType(CType(63, Byte), Integer), CType(CType(154, Byte), Integer), CType(CType(92, Byte), Integer))
        Me.ButtonConnect.FlatAppearance.MouseOverBackColor = System.Drawing.Color.FromArgb(CType(CType(71, Byte), Integer), CType(CType(173, Byte), Integer), CType(CType(103, Byte), Integer))
        Me.ButtonConnect.FlatStyle = System.Windows.Forms.FlatStyle.Flat
        Me.ButtonConnect.Font = New System.Drawing.Font("Microsoft Sans Serif", 8.25!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.ButtonConnect.ForeColor = System.Drawing.Color.White
        Me.ButtonConnect.Location = New System.Drawing.Point(9, 83)
        Me.ButtonConnect.Name = "ButtonConnect"
        Me.ButtonConnect.Size = New System.Drawing.Size(410, 23)
        Me.ButtonConnect.TabIndex = 5
        Me.ButtonConnect.Text = "Connect"
        Me.ButtonConnect.UseVisualStyleBackColor = False
        '
        'ButtonDisconnect
        '
        Me.ButtonDisconnect.BackColor = System.Drawing.Color.FromArgb(CType(CType(249, Byte), Integer), CType(CType(97, Byte), Integer), CType(CType(97, Byte), Integer))
        Me.ButtonDisconnect.FlatAppearance.MouseDownBackColor = System.Drawing.Color.FromArgb(CType(CType(199, Byte), Integer), CType(CType(77, Byte), Integer), CType(CType(77, Byte), Integer))
        Me.ButtonDisconnect.FlatAppearance.MouseOverBackColor = System.Drawing.Color.FromArgb(CType(CType(244, Byte), Integer), CType(CType(87, Byte), Integer), CType(CType(87, Byte), Integer))
        Me.ButtonDisconnect.Font = New System.Drawing.Font("Microsoft Sans Serif", 8.25!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.ButtonDisconnect.ForeColor = System.Drawing.Color.White
        Me.ButtonDisconnect.Location = New System.Drawing.Point(9, 83)
        Me.ButtonDisconnect.Name = "ButtonDisconnect"
        Me.ButtonDisconnect.Size = New System.Drawing.Size(410, 23)
        Me.ButtonDisconnect.TabIndex = 1
        Me.ButtonDisconnect.Text = "Disconnect"
        Me.ButtonDisconnect.UseVisualStyleBackColor = False
        '
        'Timer
        '
        Me.Timer.Interval = 500
        '
        'PictureBoxStatusConnection
        '
        Me.PictureBoxStatusConnection.Anchor = CType((System.Windows.Forms.AnchorStyles.Bottom Or System.Windows.Forms.AnchorStyles.Left), System.Windows.Forms.AnchorStyles)
        Me.PictureBoxStatusConnection.BackColor = System.Drawing.Color.Red
        Me.PictureBoxStatusConnection.Location = New System.Drawing.Point(112, 1097)
        Me.PictureBoxStatusConnection.Name = "PictureBoxStatusConnection"
        Me.PictureBoxStatusConnection.Size = New System.Drawing.Size(10, 12)
        Me.PictureBoxStatusConnection.TabIndex = 16
        Me.PictureBoxStatusConnection.TabStop = False
        '
        'LabelStatus
        '
        Me.LabelStatus.Anchor = CType((System.Windows.Forms.AnchorStyles.Bottom Or System.Windows.Forms.AnchorStyles.Left), System.Windows.Forms.AnchorStyles)
        Me.LabelStatus.AutoSize = True
        Me.LabelStatus.Font = New System.Drawing.Font("Microsoft Sans Serif", 8.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.LabelStatus.ForeColor = System.Drawing.SystemColors.WindowFrame
        Me.LabelStatus.Location = New System.Drawing.Point(9, 1096)
        Me.LabelStatus.Name = "LabelStatus"
        Me.LabelStatus.Size = New System.Drawing.Size(100, 13)
        Me.LabelStatus.TabIndex = 15
        Me.LabelStatus.Text = "Status : Disconnect"
        '
        'PanelHumidity
        '
        Me.PanelHumidity.Anchor = CType((System.Windows.Forms.AnchorStyles.Top Or System.Windows.Forms.AnchorStyles.Right), System.Windows.Forms.AnchorStyles)
        Me.PanelHumidity.BackColor = System.Drawing.Color.White
        Me.PanelHumidity.Controls.Add(Me.CircularProgressBarHumidity)
        Me.PanelHumidity.Controls.Add(Me.Label1)
        Me.PanelHumidity.Font = New System.Drawing.Font("Microsoft Sans Serif", 12.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.PanelHumidity.ForeColor = System.Drawing.Color.White
        Me.PanelHumidity.Location = New System.Drawing.Point(537, 28)
        Me.PanelHumidity.Name = "PanelHumidity"
        Me.PanelHumidity.Size = New System.Drawing.Size(200, 179)
        Me.PanelHumidity.TabIndex = 17
        '
        'CircularProgressBarHumidity
        '
        Me.CircularProgressBarHumidity.Anchor = CType((System.Windows.Forms.AnchorStyles.Top Or System.Windows.Forms.AnchorStyles.Right), System.Windows.Forms.AnchorStyles)
        Me.CircularProgressBarHumidity.AnimationFunction = WinFormAnimation.KnownAnimationFunctions.Liner
        Me.CircularProgressBarHumidity.AnimationSpeed = 500
        Me.CircularProgressBarHumidity.BackColor = System.Drawing.Color.Transparent
        Me.CircularProgressBarHumidity.Font = New System.Drawing.Font("Microsoft Sans Serif", 18.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.CircularProgressBarHumidity.ForeColor = System.Drawing.Color.FromArgb(CType(CType(96, Byte), Integer), CType(CType(180, Byte), Integer), CType(CType(249, Byte), Integer))
        Me.CircularProgressBarHumidity.InnerColor = System.Drawing.Color.White
        Me.CircularProgressBarHumidity.InnerMargin = 2
        Me.CircularProgressBarHumidity.InnerWidth = -1
        Me.CircularProgressBarHumidity.Location = New System.Drawing.Point(35, 43)
        Me.CircularProgressBarHumidity.MarqueeAnimationSpeed = 2000
        Me.CircularProgressBarHumidity.Name = "CircularProgressBarHumidity"
        Me.CircularProgressBarHumidity.OuterColor = System.Drawing.Color.FromArgb(CType(CType(237, Byte), Integer), CType(CType(235, Byte), Integer), CType(CType(235, Byte), Integer))
        Me.CircularProgressBarHumidity.OuterMargin = -25
        Me.CircularProgressBarHumidity.OuterWidth = 26
        Me.CircularProgressBarHumidity.ProgressColor = System.Drawing.Color.FromArgb(CType(CType(96, Byte), Integer), CType(CType(180, Byte), Integer), CType(CType(249, Byte), Integer))
        Me.CircularProgressBarHumidity.ProgressWidth = 25
        Me.CircularProgressBarHumidity.SecondaryFont = New System.Drawing.Font("Microsoft Sans Serif", 36.0!)
        Me.CircularProgressBarHumidity.Size = New System.Drawing.Size(120, 120)
        Me.CircularProgressBarHumidity.StartAngle = 90
        Me.CircularProgressBarHumidity.SubscriptColor = System.Drawing.Color.FromArgb(CType(CType(166, Byte), Integer), CType(CType(166, Byte), Integer), CType(CType(166, Byte), Integer))
        Me.CircularProgressBarHumidity.SubscriptMargin = New System.Windows.Forms.Padding(10, -35, 0, 0)
        Me.CircularProgressBarHumidity.SubscriptText = ""
        Me.CircularProgressBarHumidity.SuperscriptColor = System.Drawing.Color.FromArgb(CType(CType(166, Byte), Integer), CType(CType(166, Byte), Integer), CType(CType(166, Byte), Integer))
        Me.CircularProgressBarHumidity.SuperscriptMargin = New System.Windows.Forms.Padding(10, 35, 0, 0)
        Me.CircularProgressBarHumidity.SuperscriptText = " "
        Me.CircularProgressBarHumidity.TabIndex = 18
        Me.CircularProgressBarHumidity.Text = "  00%"
        Me.CircularProgressBarHumidity.TextMargin = New System.Windows.Forms.Padding(0, 4, 0, 0)
        Me.CircularProgressBarHumidity.Value = 68
        '
        'Label1
        '
        Me.Label1.AutoSize = True
        Me.Label1.Font = New System.Drawing.Font("Microsoft Sans Serif", 12.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label1.ForeColor = System.Drawing.Color.FromArgb(CType(CType(96, Byte), Integer), CType(CType(180, Byte), Integer), CType(CType(249, Byte), Integer))
        Me.Label1.Location = New System.Drawing.Point(48, 9)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(78, 20)
        Me.Label1.TabIndex = 2
        Me.Label1.Text = "Humidity"
        '
        'PanelTemperature
        '
        Me.PanelTemperature.Anchor = CType((System.Windows.Forms.AnchorStyles.Top Or System.Windows.Forms.AnchorStyles.Right), System.Windows.Forms.AnchorStyles)
        Me.PanelTemperature.BackColor = System.Drawing.Color.White
        Me.PanelTemperature.Controls.Add(Me.PictureBoxPBTemp)
        Me.PanelTemperature.Controls.Add(Me.LabelTempMin)
        Me.PanelTemperature.Controls.Add(Me.LabelTemperature)
        Me.PanelTemperature.Controls.Add(Me.LabelTempMax)
        Me.PanelTemperature.Controls.Add(Me.PictureBoxPBTempBack)
        Me.PanelTemperature.Controls.Add(Me.LabelTemperatureTitle)
        Me.PanelTemperature.Location = New System.Drawing.Point(537, 213)
        Me.PanelTemperature.Name = "PanelTemperature"
        Me.PanelTemperature.Size = New System.Drawing.Size(200, 176)
        Me.PanelTemperature.TabIndex = 18
        '
        'PictureBoxPBTemp
        '
        Me.PictureBoxPBTemp.BackColor = System.Drawing.Color.FromArgb(CType(CType(255, Byte), Integer), CType(CType(153, Byte), Integer), CType(CType(0, Byte), Integer))
        Me.PictureBoxPBTemp.Location = New System.Drawing.Point(47, 62)
        Me.PictureBoxPBTemp.Name = "PictureBoxPBTemp"
        Me.PictureBoxPBTemp.Size = New System.Drawing.Size(27, 111)
        Me.PictureBoxPBTemp.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage
        Me.PictureBoxPBTemp.TabIndex = 2
        Me.PictureBoxPBTemp.TabStop = False
        '
        'LabelTempMin
        '
        Me.LabelTempMin.AutoSize = True
        Me.LabelTempMin.Font = New System.Drawing.Font("Microsoft Sans Serif", 8.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.LabelTempMin.ForeColor = System.Drawing.SystemColors.HotTrack
        Me.LabelTempMin.Location = New System.Drawing.Point(81, 152)
        Me.LabelTempMin.Name = "LabelTempMin"
        Me.LabelTempMin.Size = New System.Drawing.Size(22, 13)
        Me.LabelTempMin.TabIndex = 5
        Me.LabelTempMin.Text = "-10"
        '
        'LabelTemperature
        '
        Me.LabelTemperature.AutoSize = True
        Me.LabelTemperature.Font = New System.Drawing.Font("Microsoft Sans Serif", 20.25!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.LabelTemperature.ForeColor = System.Drawing.Color.FromArgb(CType(CType(255, Byte), Integer), CType(CType(153, Byte), Integer), CType(CType(0, Byte), Integer))
        Me.LabelTemperature.Location = New System.Drawing.Point(80, 96)
        Me.LabelTemperature.Name = "LabelTemperature"
        Me.LabelTemperature.Size = New System.Drawing.Size(79, 31)
        Me.LabelTemperature.TabIndex = 4
        Me.LabelTemperature.Text = "00°C"
        '
        'LabelTempMax
        '
        Me.LabelTempMax.AutoSize = True
        Me.LabelTempMax.Font = New System.Drawing.Font("Microsoft Sans Serif", 8.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.LabelTempMax.ForeColor = System.Drawing.SystemColors.HotTrack
        Me.LabelTempMax.Location = New System.Drawing.Point(81, 46)
        Me.LabelTempMax.Name = "LabelTempMax"
        Me.LabelTempMax.Size = New System.Drawing.Size(19, 13)
        Me.LabelTempMax.TabIndex = 3
        Me.LabelTempMax.Text = "60"
        '
        'PictureBoxPBTempBack
        '
        Me.PictureBoxPBTempBack.BackColor = System.Drawing.Color.FromArgb(CType(CType(237, Byte), Integer), CType(CType(235, Byte), Integer), CType(CType(235, Byte), Integer))
        Me.PictureBoxPBTempBack.Location = New System.Drawing.Point(47, 45)
        Me.PictureBoxPBTempBack.Name = "PictureBoxPBTempBack"
        Me.PictureBoxPBTempBack.Size = New System.Drawing.Size(27, 120)
        Me.PictureBoxPBTempBack.TabIndex = 1
        Me.PictureBoxPBTempBack.TabStop = False
        '
        'LabelTemperatureTitle
        '
        Me.LabelTemperatureTitle.AutoSize = True
        Me.LabelTemperatureTitle.Font = New System.Drawing.Font("Microsoft Sans Serif", 12.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.LabelTemperatureTitle.ForeColor = System.Drawing.Color.FromArgb(CType(CType(255, Byte), Integer), CType(CType(153, Byte), Integer), CType(CType(0, Byte), Integer))
        Me.LabelTemperatureTitle.Location = New System.Drawing.Point(45, 11)
        Me.LabelTemperatureTitle.Name = "LabelTemperatureTitle"
        Me.LabelTemperatureTitle.Size = New System.Drawing.Size(111, 20)
        Me.LabelTemperatureTitle.TabIndex = 0
        Me.LabelTemperatureTitle.Text = "Temperature"
        '
        'Panel1
        '
        Me.Panel1.Anchor = CType((System.Windows.Forms.AnchorStyles.Top Or System.Windows.Forms.AnchorStyles.Right), System.Windows.Forms.AnchorStyles)
        Me.Panel1.BackColor = System.Drawing.Color.White
        Me.Panel1.Controls.Add(Me.Label2)
        Me.Panel1.Controls.Add(Me.Label3)
        Me.Panel1.Controls.Add(Me.Label4)
        Me.Panel1.Controls.Add(Me.PictureBoxPBAlti)
        Me.Panel1.Controls.Add(Me.PictureBoxPBAltiBack)
        Me.Panel1.Controls.Add(Me.LabelAltitude)
        Me.Panel1.Location = New System.Drawing.Point(537, 395)
        Me.Panel1.Name = "Panel1"
        Me.Panel1.Size = New System.Drawing.Size(200, 176)
        Me.Panel1.TabIndex = 19
        '
        'Label2
        '
        Me.Label2.AutoSize = True
        Me.Label2.Font = New System.Drawing.Font("Microsoft Sans Serif", 8.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label2.ForeColor = System.Drawing.SystemColors.HotTrack
        Me.Label2.Location = New System.Drawing.Point(81, 152)
        Me.Label2.Name = "Label2"
        Me.Label2.Size = New System.Drawing.Size(31, 13)
        Me.Label2.TabIndex = 5
        Me.Label2.Text = "1400"
        '
        'Label3
        '
        Me.Label3.AutoSize = True
        Me.Label3.Font = New System.Drawing.Font("Microsoft Sans Serif", 20.25!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label3.ForeColor = System.Drawing.Color.FromArgb(CType(CType(255, Byte), Integer), CType(CType(153, Byte), Integer), CType(CType(0, Byte), Integer))
        Me.Label3.Location = New System.Drawing.Point(80, 87)
        Me.Label3.Name = "Label3"
        Me.Label3.Size = New System.Drawing.Size(46, 31)
        Me.Label3.TabIndex = 4
        Me.Label3.Text = "00"
        '
        'Label4
        '
        Me.Label4.AutoSize = True
        Me.Label4.Font = New System.Drawing.Font("Microsoft Sans Serif", 8.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label4.ForeColor = System.Drawing.SystemColors.HotTrack
        Me.Label4.Location = New System.Drawing.Point(81, 46)
        Me.Label4.Name = "Label4"
        Me.Label4.Size = New System.Drawing.Size(31, 13)
        Me.Label4.TabIndex = 3
        Me.Label4.Text = "1550"
        '
        'PictureBoxPBAlti
        '
        Me.PictureBoxPBAlti.BackColor = System.Drawing.Color.Green
        Me.PictureBoxPBAlti.Location = New System.Drawing.Point(47, 62)
        Me.PictureBoxPBAlti.Name = "PictureBoxPBAlti"
        Me.PictureBoxPBAlti.Size = New System.Drawing.Size(27, 103)
        Me.PictureBoxPBAlti.TabIndex = 2
        Me.PictureBoxPBAlti.TabStop = False
        '
        'PictureBoxPBAltiBack
        '
        Me.PictureBoxPBAltiBack.BackColor = System.Drawing.Color.FromArgb(CType(CType(237, Byte), Integer), CType(CType(235, Byte), Integer), CType(CType(235, Byte), Integer))
        Me.PictureBoxPBAltiBack.Location = New System.Drawing.Point(47, 45)
        Me.PictureBoxPBAltiBack.Name = "PictureBoxPBAltiBack"
        Me.PictureBoxPBAltiBack.Size = New System.Drawing.Size(27, 120)
        Me.PictureBoxPBAltiBack.TabIndex = 1
        Me.PictureBoxPBAltiBack.TabStop = False
        '
        'LabelAltitude
        '
        Me.LabelAltitude.AutoSize = True
        Me.LabelAltitude.Font = New System.Drawing.Font("Microsoft Sans Serif", 12.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.LabelAltitude.ForeColor = System.Drawing.Color.Green
        Me.LabelAltitude.Location = New System.Drawing.Point(45, 11)
        Me.LabelAltitude.Name = "LabelAltitude"
        Me.LabelAltitude.Size = New System.Drawing.Size(71, 20)
        Me.LabelAltitude.TabIndex = 0
        Me.LabelAltitude.Text = "Altitude"
        '
        'Chart2
        '
        Me.Chart2.Anchor = CType((System.Windows.Forms.AnchorStyles.Top Or System.Windows.Forms.AnchorStyles.Right), System.Windows.Forms.AnchorStyles)
        ChartArea21.AxisX.MajorGrid.LineColor = System.Drawing.Color.FromArgb(CType(CType(237, Byte), Integer), CType(CType(235, Byte), Integer), CType(CType(235, Byte), Integer))
        ChartArea21.AxisX.TitleForeColor = System.Drawing.Color.FromArgb(CType(CType(237, Byte), Integer), CType(CType(235, Byte), Integer), CType(CType(235, Byte), Integer))
        ChartArea21.AxisY.MajorGrid.LineColor = System.Drawing.Color.FromArgb(CType(CType(237, Byte), Integer), CType(CType(235, Byte), Integer), CType(CType(235, Byte), Integer))
        ChartArea21.BorderColor = System.Drawing.Color.BlueViolet
        ChartArea21.Name = "ChartArea1"
        Me.Chart2.ChartAreas.Add(ChartArea21)
        Legend21.Name = "Legend1"
        Me.Chart2.Legends.Add(Legend21)
        Me.Chart2.Location = New System.Drawing.Point(772, 28)
        Me.Chart2.Margin = New System.Windows.Forms.Padding(4)
        Me.Chart2.Name = "Chart2"
        Series21.BorderWidth = 3
        Series21.ChartArea = "ChartArea1"
        Series21.ChartType = System.Windows.Forms.DataVisualization.Charting.SeriesChartType.Spline
        Series21.Color = System.Drawing.Color.Blue
        Series21.Legend = "Legend1"
        Series21.Name = "Humidity"
        Me.Chart2.Series.Add(Series21)
        Me.Chart2.Size = New System.Drawing.Size(587, 179)
        Me.Chart2.TabIndex = 26
        Me.Chart2.Text = "Chart2"
        '
        'Chart1
        '
        Me.Chart1.Anchor = CType((System.Windows.Forms.AnchorStyles.Top Or System.Windows.Forms.AnchorStyles.Right), System.Windows.Forms.AnchorStyles)
        ChartArea22.AxisX.MajorGrid.LineColor = System.Drawing.Color.FromArgb(CType(CType(237, Byte), Integer), CType(CType(235, Byte), Integer), CType(CType(235, Byte), Integer))
        ChartArea22.AxisX.TitleForeColor = System.Drawing.Color.FromArgb(CType(CType(237, Byte), Integer), CType(CType(235, Byte), Integer), CType(CType(235, Byte), Integer))
        ChartArea22.AxisY.MajorGrid.LineColor = System.Drawing.Color.FromArgb(CType(CType(237, Byte), Integer), CType(CType(235, Byte), Integer), CType(CType(235, Byte), Integer))
        ChartArea22.AxisY.TitleForeColor = System.Drawing.Color.FromArgb(CType(CType(237, Byte), Integer), CType(CType(235, Byte), Integer), CType(CType(235, Byte), Integer))
        ChartArea22.BorderColor = System.Drawing.Color.FromArgb(CType(CType(237, Byte), Integer), CType(CType(235, Byte), Integer), CType(CType(235, Byte), Integer))
        ChartArea22.Name = "ChartArea1"
        Me.Chart1.ChartAreas.Add(ChartArea22)
        Legend22.Name = "Legend1"
        Me.Chart1.Legends.Add(Legend22)
        Me.Chart1.Location = New System.Drawing.Point(772, 217)
        Me.Chart1.Name = "Chart1"
        Series22.BorderWidth = 3
        Series22.ChartArea = "ChartArea1"
        Series22.ChartType = System.Windows.Forms.DataVisualization.Charting.SeriesChartType.Spline
        Series22.Color = System.Drawing.Color.FromArgb(CType(CType(255, Byte), Integer), CType(CType(153, Byte), Integer), CType(CType(0, Byte), Integer))
        Series22.LabelForeColor = System.Drawing.Color.BlanchedAlmond
        Series22.Legend = "Legend1"
        Series22.MarkerBorderColor = System.Drawing.Color.FromArgb(CType(CType(192, Byte), Integer), CType(CType(255, Byte), Integer), CType(CType(192, Byte), Integer))
        Series22.Name = "Temperature"
        Me.Chart1.Series.Add(Series22)
        Me.Chart1.Size = New System.Drawing.Size(587, 172)
        Me.Chart1.TabIndex = 28
        Me.Chart1.Text = "Chart1"
        '
        'Chart3
        '
        Me.Chart3.Anchor = CType((System.Windows.Forms.AnchorStyles.Top Or System.Windows.Forms.AnchorStyles.Right), System.Windows.Forms.AnchorStyles)
        ChartArea23.AxisX.MajorGrid.LineColor = System.Drawing.Color.FromArgb(CType(CType(237, Byte), Integer), CType(CType(235, Byte), Integer), CType(CType(235, Byte), Integer))
        ChartArea23.AxisX.TitleForeColor = System.Drawing.Color.FromArgb(CType(CType(237, Byte), Integer), CType(CType(235, Byte), Integer), CType(CType(235, Byte), Integer))
        ChartArea23.AxisY.MajorGrid.LineColor = System.Drawing.Color.FromArgb(CType(CType(237, Byte), Integer), CType(CType(235, Byte), Integer), CType(CType(235, Byte), Integer))
        ChartArea23.AxisY.TitleForeColor = System.Drawing.Color.FromArgb(CType(CType(237, Byte), Integer), CType(CType(235, Byte), Integer), CType(CType(235, Byte), Integer))
        ChartArea23.BorderColor = System.Drawing.Color.FromArgb(CType(CType(237, Byte), Integer), CType(CType(235, Byte), Integer), CType(CType(235, Byte), Integer))
        ChartArea23.Name = "ChartArea1"
        Me.Chart3.ChartAreas.Add(ChartArea23)
        Legend23.Name = "Legend1"
        Me.Chart3.Legends.Add(Legend23)
        Me.Chart3.Location = New System.Drawing.Point(772, 392)
        Me.Chart3.Name = "Chart3"
        Series23.BorderWidth = 3
        Series23.ChartArea = "ChartArea1"
        Series23.ChartType = System.Windows.Forms.DataVisualization.Charting.SeriesChartType.Spline
        Series23.Color = System.Drawing.Color.FromArgb(CType(CType(0, Byte), Integer), CType(CType(192, Byte), Integer), CType(CType(0, Byte), Integer))
        Series23.LabelForeColor = System.Drawing.Color.BlanchedAlmond
        Series23.Legend = "Legend1"
        Series23.MarkerBorderColor = System.Drawing.Color.FromArgb(CType(CType(192, Byte), Integer), CType(CType(255, Byte), Integer), CType(CType(192, Byte), Integer))
        Series23.Name = "Altitude"
        Me.Chart3.Series.Add(Series23)
        Me.Chart3.Size = New System.Drawing.Size(587, 172)
        Me.Chart3.TabIndex = 29
        Me.Chart3.Text = "Chart3"
        '
        'PictureBox11
        '
        Me.PictureBox11.Anchor = CType((System.Windows.Forms.AnchorStyles.Top Or System.Windows.Forms.AnchorStyles.Right), System.Windows.Forms.AnchorStyles)
        Me.PictureBox11.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch
        Me.PictureBox11.Image = CType(resources.GetObject("PictureBox11.Image"), System.Drawing.Image)
        Me.PictureBox11.Location = New System.Drawing.Point(1242, 73)
        Me.PictureBox11.Margin = New System.Windows.Forms.Padding(4)
        Me.PictureBox11.Name = "PictureBox11"
        Me.PictureBox11.Size = New System.Drawing.Size(117, 115)
        Me.PictureBox11.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage
        Me.PictureBox11.TabIndex = 30
        Me.PictureBox11.TabStop = False
        '
        'PictureBox10
        '
        Me.PictureBox10.Anchor = CType((System.Windows.Forms.AnchorStyles.Top Or System.Windows.Forms.AnchorStyles.Right), System.Windows.Forms.AnchorStyles)
        Me.PictureBox10.BackColor = System.Drawing.Color.White
        Me.PictureBox10.Image = CType(resources.GetObject("PictureBox10.Image"), System.Drawing.Image)
        Me.PictureBox10.Location = New System.Drawing.Point(1232, 259)
        Me.PictureBox10.Margin = New System.Windows.Forms.Padding(4)
        Me.PictureBox10.Name = "PictureBox10"
        Me.PictureBox10.Size = New System.Drawing.Size(123, 120)
        Me.PictureBox10.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage
        Me.PictureBox10.TabIndex = 31
        Me.PictureBox10.TabStop = False
        '
        'PictureBox9
        '
        Me.PictureBox9.Anchor = CType((System.Windows.Forms.AnchorStyles.Top Or System.Windows.Forms.AnchorStyles.Right), System.Windows.Forms.AnchorStyles)
        Me.PictureBox9.BackColor = System.Drawing.Color.White
        Me.PictureBox9.Image = CType(resources.GetObject("PictureBox9.Image"), System.Drawing.Image)
        Me.PictureBox9.Location = New System.Drawing.Point(1232, 431)
        Me.PictureBox9.Margin = New System.Windows.Forms.Padding(4)
        Me.PictureBox9.Name = "PictureBox9"
        Me.PictureBox9.Size = New System.Drawing.Size(123, 115)
        Me.PictureBox9.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage
        Me.PictureBox9.TabIndex = 32
        Me.PictureBox9.TabStop = False
        '
        'PictureBox7
        '
        Me.PictureBox7.Anchor = CType((System.Windows.Forms.AnchorStyles.Bottom Or System.Windows.Forms.AnchorStyles.Right), System.Windows.Forms.AnchorStyles)
        Me.PictureBox7.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch
        Me.PictureBox7.Image = CType(resources.GetObject("PictureBox7.Image"), System.Drawing.Image)
        Me.PictureBox7.Location = New System.Drawing.Point(1585, 981)
        Me.PictureBox7.Margin = New System.Windows.Forms.Padding(4)
        Me.PictureBox7.Name = "PictureBox7"
        Me.PictureBox7.Size = New System.Drawing.Size(127, 124)
        Me.PictureBox7.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage
        Me.PictureBox7.TabIndex = 33
        Me.PictureBox7.TabStop = False
        '
        'PictureBox3
        '
        Me.PictureBox3.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D
        Me.PictureBox3.Image = CType(resources.GetObject("PictureBox3.Image"), System.Drawing.Image)
        Me.PictureBox3.Location = New System.Drawing.Point(12, 169)
        Me.PictureBox3.Name = "PictureBox3"
        Me.PictureBox3.Size = New System.Drawing.Size(428, 237)
        Me.PictureBox3.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage
        Me.PictureBox3.TabIndex = 14
        Me.PictureBox3.TabStop = False
        '
        'Info
        '
        Me.Info.Anchor = System.Windows.Forms.AnchorStyles.Bottom
        Me.Info.AutoSize = True
        Me.Info.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Info.ForeColor = System.Drawing.SystemColors.HotTrack
        Me.Info.Location = New System.Drawing.Point(614, 1081)
        Me.Info.Margin = New System.Windows.Forms.Padding(4, 0, 4, 0)
        Me.Info.Name = "Info"
        Me.Info.Size = New System.Drawing.Size(414, 24)
        Me.Info.TabIndex = 34
        Me.Info.Text = "काठमाडौं विश्वविद्यालय।  वास्तविक समय डाटा निगरानी प्रणाली।"
        '
        'PictureBox1
        '
        Me.PictureBox1.Anchor = CType((System.Windows.Forms.AnchorStyles.Bottom Or System.Windows.Forms.AnchorStyles.Right), System.Windows.Forms.AnchorStyles)
        Me.PictureBox1.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch
        Me.PictureBox1.Image = CType(resources.GetObject("PictureBox1.Image"), System.Drawing.Image)
        Me.PictureBox1.Location = New System.Drawing.Point(1376, 827)
        Me.PictureBox1.Margin = New System.Windows.Forms.Padding(4)
        Me.PictureBox1.Name = "PictureBox1"
        Me.PictureBox1.Size = New System.Drawing.Size(127, 124)
        Me.PictureBox1.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage
        Me.PictureBox1.TabIndex = 35
        Me.PictureBox1.TabStop = False
        '
        'Label9
        '
        Me.Label9.Anchor = System.Windows.Forms.AnchorStyles.Bottom
        Me.Label9.AutoSize = True
        Me.Label9.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label9.ForeColor = System.Drawing.SystemColors.HotTrack
        Me.Label9.Location = New System.Drawing.Point(561, 914)
        Me.Label9.Margin = New System.Windows.Forms.Padding(4, 0, 4, 0)
        Me.Label9.Name = "Label9"
        Me.Label9.Size = New System.Drawing.Size(414, 24)
        Me.Label9.TabIndex = 36
        Me.Label9.Text = "काठमाडौं विश्वविद्यालय।  वास्तविक समय डाटा निगरानी प्रणाली।"
        '
        'Label10
        '
        Me.Label10.Anchor = CType((System.Windows.Forms.AnchorStyles.Bottom Or System.Windows.Forms.AnchorStyles.Left), System.Windows.Forms.AnchorStyles)
        Me.Label10.AutoSize = True
        Me.Label10.Font = New System.Drawing.Font("Microsoft Sans Serif", 8.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label10.ForeColor = System.Drawing.SystemColors.WindowFrame
        Me.Label10.Location = New System.Drawing.Point(18, 925)
        Me.Label10.Margin = New System.Windows.Forms.Padding(4, 0, 4, 0)
        Me.Label10.Name = "Label10"
        Me.Label10.Size = New System.Drawing.Size(100, 13)
        Me.Label10.TabIndex = 38
        Me.Label10.Text = "Status : Disconnect"
        '
        'PictureBox4
        '
        Me.PictureBox4.Anchor = CType((System.Windows.Forms.AnchorStyles.Bottom Or System.Windows.Forms.AnchorStyles.Left), System.Windows.Forms.AnchorStyles)
        Me.PictureBox4.BackColor = System.Drawing.Color.Red
        Me.PictureBox4.Location = New System.Drawing.Point(126, 925)
        Me.PictureBox4.Margin = New System.Windows.Forms.Padding(4)
        Me.PictureBox4.Name = "PictureBox4"
        Me.PictureBox4.Size = New System.Drawing.Size(13, 15)
        Me.PictureBox4.TabIndex = 39
        Me.PictureBox4.TabStop = False
        '
        'Chart4
        '
        Me.Chart4.Anchor = CType((System.Windows.Forms.AnchorStyles.Top Or System.Windows.Forms.AnchorStyles.Right), System.Windows.Forms.AnchorStyles)
        ChartArea24.AxisX.MajorGrid.LineColor = System.Drawing.Color.FromArgb(CType(CType(237, Byte), Integer), CType(CType(235, Byte), Integer), CType(CType(235, Byte), Integer))
        ChartArea24.AxisX.TitleForeColor = System.Drawing.Color.FromArgb(CType(CType(237, Byte), Integer), CType(CType(235, Byte), Integer), CType(CType(235, Byte), Integer))
        ChartArea24.AxisY.MajorGrid.LineColor = System.Drawing.Color.FromArgb(CType(CType(237, Byte), Integer), CType(CType(235, Byte), Integer), CType(CType(235, Byte), Integer))
        ChartArea24.AxisY.TitleForeColor = System.Drawing.Color.FromArgb(CType(CType(237, Byte), Integer), CType(CType(235, Byte), Integer), CType(CType(235, Byte), Integer))
        ChartArea24.BorderColor = System.Drawing.Color.FromArgb(CType(CType(237, Byte), Integer), CType(CType(235, Byte), Integer), CType(CType(235, Byte), Integer))
        ChartArea24.Name = "ChartArea1"
        Me.Chart4.ChartAreas.Add(ChartArea24)
        Legend24.Name = "Legend1"
        Me.Chart4.Legends.Add(Legend24)
        Me.Chart4.Location = New System.Drawing.Point(772, 582)
        Me.Chart4.Name = "Chart4"
        Series24.BorderWidth = 3
        Series24.ChartArea = "ChartArea1"
        Series24.ChartType = System.Windows.Forms.DataVisualization.Charting.SeriesChartType.Spline
        Series24.Color = System.Drawing.Color.Maroon
        Series24.LabelForeColor = System.Drawing.Color.BlanchedAlmond
        Series24.Legend = "Legend1"
        Series24.MarkerBorderColor = System.Drawing.Color.FromArgb(CType(CType(192, Byte), Integer), CType(CType(255, Byte), Integer), CType(CType(192, Byte), Integer))
        Series24.Name = "Dust"
        Me.Chart4.Series.Add(Series24)
        Me.Chart4.Size = New System.Drawing.Size(587, 172)
        Me.Chart4.TabIndex = 44
        Me.Chart4.Text = "Chart4"
        '
        'PictureBox2
        '
        Me.PictureBox2.Anchor = CType((System.Windows.Forms.AnchorStyles.Top Or System.Windows.Forms.AnchorStyles.Right), System.Windows.Forms.AnchorStyles)
        Me.PictureBox2.Image = CType(resources.GetObject("PictureBox2.Image"), System.Drawing.Image)
        Me.PictureBox2.Location = New System.Drawing.Point(537, 593)
        Me.PictureBox2.Name = "PictureBox2"
        Me.PictureBox2.Size = New System.Drawing.Size(200, 161)
        Me.PictureBox2.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage
        Me.PictureBox2.TabIndex = 46
        Me.PictureBox2.TabStop = False
        '
        'Label5
        '
        Me.Label5.AutoSize = True
        Me.Label5.Font = New System.Drawing.Font("Microsoft Sans Serif", 20.25!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label5.ForeColor = System.Drawing.Color.FromArgb(CType(CType(255, Byte), Integer), CType(CType(153, Byte), Integer), CType(CType(0, Byte), Integer))
        Me.Label5.Location = New System.Drawing.Point(716, 766)
        Me.Label5.Name = "Label5"
        Me.Label5.Size = New System.Drawing.Size(46, 31)
        Me.Label5.TabIndex = 6
        Me.Label5.Text = "00"
        '
        'Label6
        '
        Me.Label6.AutoSize = True
        Me.Label6.Font = New System.Drawing.Font("Microsoft Sans Serif", 20.25!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label6.ForeColor = System.Drawing.Color.FromArgb(CType(CType(255, Byte), Integer), CType(CType(153, Byte), Integer), CType(CType(0, Byte), Integer))
        Me.Label6.Location = New System.Drawing.Point(531, 766)
        Me.Label6.Name = "Label6"
        Me.Label6.Size = New System.Drawing.Size(191, 31)
        Me.Label6.TabIndex = 47
        Me.Label6.Text = "Dust Density:"
        Me.Label6.TextAlign = System.Drawing.ContentAlignment.TopRight
        '
        'Form1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.BackColor = System.Drawing.SystemColors.ButtonFace
        Me.ClientSize = New System.Drawing.Size(1388, 806)
        Me.Controls.Add(Me.Label6)
        Me.Controls.Add(Me.Label5)
        Me.Controls.Add(Me.PictureBox2)
        Me.Controls.Add(Me.Chart4)
        Me.Controls.Add(Me.PictureBox4)
        Me.Controls.Add(Me.Label10)
        Me.Controls.Add(Me.Label9)
        Me.Controls.Add(Me.PictureBox1)
        Me.Controls.Add(Me.Info)
        Me.Controls.Add(Me.PictureBox7)
        Me.Controls.Add(Me.PictureBox9)
        Me.Controls.Add(Me.PictureBox11)
        Me.Controls.Add(Me.Chart3)
        Me.Controls.Add(Me.Chart2)
        Me.Controls.Add(Me.Panel1)
        Me.Controls.Add(Me.PanelTemperature)
        Me.Controls.Add(Me.PanelHumidity)
        Me.Controls.Add(Me.PictureBoxStatusConnection)
        Me.Controls.Add(Me.LabelStatus)
        Me.Controls.Add(Me.PictureBox3)
        Me.Controls.Add(Me.PanelConnection)
        Me.Controls.Add(Me.PictureBox10)
        Me.Controls.Add(Me.Chart1)
        Me.Name = "Form1"
        Me.Text = "Form1"
        Me.PanelConnection.ResumeLayout(False)
        Me.PanelConnection.PerformLayout()
        CType(Me.PictureBoxStatusConnection, System.ComponentModel.ISupportInitialize).EndInit()
        Me.PanelHumidity.ResumeLayout(False)
        Me.PanelHumidity.PerformLayout()
        Me.PanelTemperature.ResumeLayout(False)
        Me.PanelTemperature.PerformLayout()
        CType(Me.PictureBoxPBTemp, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.PictureBoxPBTempBack, System.ComponentModel.ISupportInitialize).EndInit()
        Me.Panel1.ResumeLayout(False)
        Me.Panel1.PerformLayout()
        CType(Me.PictureBoxPBAlti, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.PictureBoxPBAltiBack, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.Chart2, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.Chart1, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.Chart3, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.PictureBox11, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.PictureBox10, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.PictureBox9, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.PictureBox7, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.PictureBox3, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.PictureBox1, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.PictureBox4, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.Chart4, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.PictureBox2, System.ComponentModel.ISupportInitialize).EndInit()
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub
    Friend WithEvents SerialPort1 As System.IO.Ports.SerialPort
    Friend WithEvents PanelConnection As Panel
    Friend WithEvents ComboBoxBaudRate As ComboBox
    Friend WithEvents LabelBaudRate As Label
    Friend WithEvents ComboBoxPort As ComboBox
    Friend WithEvents LabelConnectionTitle As Label
    Friend WithEvents ButtonScanPort As Button
    Friend WithEvents ButtonConnect As Button
    Friend WithEvents ButtonDisconnect As Button
    Friend WithEvents Timer As Timer
    Friend WithEvents PictureBoxStatusConnection As PictureBox
    Friend WithEvents LabelStatus As Label
    Friend WithEvents PanelHumidity As Panel
    Friend WithEvents Label1 As Label
    Friend WithEvents CircularProgressBarHumidity As CircularProgressBar.CircularProgressBar
    Friend WithEvents PanelTemperature As Panel
    Friend WithEvents LabelTempMin As Label
    Friend WithEvents LabelTemperature As Label
    Friend WithEvents LabelTempMax As Label
    Friend WithEvents PictureBoxPBTempBack As PictureBox
    Friend WithEvents LabelTemperatureTitle As Label
    Friend WithEvents Panel1 As Panel
    Friend WithEvents Label2 As Label
    Friend WithEvents Label3 As Label
    Friend WithEvents Label4 As Label
    Friend WithEvents PictureBoxPBAlti As PictureBox
    Friend WithEvents PictureBoxPBAltiBack As PictureBox
    Friend WithEvents LabelAltitude As Label
    Friend WithEvents PictureBoxPBTemp As PictureBox
    Friend WithEvents Chart2 As DataVisualization.Charting.Chart
    Friend WithEvents Chart1 As DataVisualization.Charting.Chart
    Friend WithEvents Chart3 As DataVisualization.Charting.Chart
    Friend WithEvents PictureBox11 As PictureBox
    Friend WithEvents PictureBox10 As PictureBox
    Friend WithEvents PictureBox9 As PictureBox
    Friend WithEvents PictureBox7 As PictureBox
    Friend WithEvents PictureBox3 As PictureBox
    Friend WithEvents Info As Label
    Friend WithEvents PictureBox1 As PictureBox
    Friend WithEvents Label9 As Label
    Friend WithEvents Label10 As Label
    Friend WithEvents PictureBox4 As PictureBox
    Friend WithEvents Chart4 As DataVisualization.Charting.Chart
    Friend WithEvents PictureBox2 As PictureBox
    Friend WithEvents Label5 As Label
    Friend WithEvents Label6 As Label
End Class
