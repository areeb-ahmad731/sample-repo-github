unit project;

interface

uses
  System.SysUtils, System.Types, System.UITypes, System.Classes, System.Variants,
  FMX.Types, FMX.Controls, FMX.Forms, FMX.Graphics, FMX.Dialogs, FMX.Layouts,
  FMX.ListBox, FMX.StdCtrls, FMX.Edit, FMX.Controls.Presentation;

type
  TForm1 = class(TForm)
    Label1: TLabel;
    taskedit: TEdit;
    Addbutton: TButton;
    tasklistbox: TListBox;
    procedure addbuttonclick(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form1: TForm1;

implementation

{$R *.fmx}

procedure TForm1.addbuttonclick(Sender: TObject);
begin {
 string tasktext =taskedit->text;
  tasklistbox->items->Add(tasktext);
  taskedit->text="";
  }
end;

end.
