object Form1: TForm1
  Left = 146
  Top = 120
  Width = 1064
  Height = 555
  BorderIcons = [biSystemMenu, biMinimize, biMaximize, biHelp]
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  ShowHint = True
  WindowState = wsMaximized
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 1224
    Top = 80
    Width = 32
    Height = 13
    Caption = 'Label1'
  end
  object Shape1: TShape
    Left = 720
    Top = 744
    Width = 249
    Height = 65
    Brush.Color = clDefault
  end
  object Button1: TButton
    Left = 1216
    Top = 0
    Width = 297
    Height = 73
    Caption = #25237#24163
    TabOrder = 0
    OnClick = Button1Click
  end
  object Timer1: TTimer
    Interval = 10
    OnTimer = Timer1Timer
    Left = 1232
    Top = 16
  end
end
