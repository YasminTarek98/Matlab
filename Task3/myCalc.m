function varargout = myCalc(varargin)
% MYCALC MATLAB code for myCalc.fig
%      MYCALC, by itself, creates a new MYCALC or raises the existing
%      singleton*.
%
%      H = MYCALC returns the handle to a new MYCALC or the handle to
%      the existing singleton*.
%
%      MYCALC('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in MYCALC.M with the given input arguments.
%
%      MYCALC('Property','Value',...) creates a new MYCALC or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before myCalc_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to myCalc_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help myCalc

% Last Modified by GUIDE v2.5 30-Jan-2022 18:19:04

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @myCalc_OpeningFcn, ...
                   'gui_OutputFcn',  @myCalc_OutputFcn, ...
                   'gui_LayoutFcn',  [] , ...
                   'gui_Callback',   []);
if nargin && ischar(varargin{1})
    gui_State.gui_Callback = str2func(varargin{1});
end

if nargout
    [varargout{1:nargout}] = gui_mainfcn(gui_State, varargin{:});
else
    gui_mainfcn(gui_State, varargin{:});
end
% End initialization code - DO NOT EDIT


% --- Executes just before myCalc is made visible.
function myCalc_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to myCalc (see VARARGIN)

% Choose default command line output for myCalc
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes myCalc wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = myCalc_OutputFcn(hObject, eventdata, handles) 
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;



function NumOne_Callback(hObject, eventdata, handles)
% hObject    handle to NumOne (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of NumOne as text
%        str2double(get(hObject,'String')) returns contents of NumOne as a double


% --- Executes during object creation, after setting all properties.
function NumOne_CreateFcn(hObject, eventdata, handles)
% hObject    handle to NumOne (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function NumTwo_Callback(hObject, eventdata, handles)
% hObject    handle to NumTwo (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of NumTwo as text
%        str2double(get(hObject,'String')) returns contents of NumTwo as a double


% --- Executes during object creation, after setting all properties.
function NumTwo_CreateFcn(hObject, eventdata, handles)
% hObject    handle to NumTwo (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function ResultS_Callback(hObject, eventdata, handles)
% hObject    handle to ResultS (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of ResultS as text
%        str2double(get(hObject,'String')) returns contents of ResultS as a double


% --- Executes during object creation, after setting all properties.
function ResultS_CreateFcn(hObject, eventdata, handles)
% hObject    handle to ResultS (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in plusOperator.
function plusOperator_Callback(hObject, eventdata, handles)
% hObject    handle to plusOperator (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hint: get(hObject,'Value') returns toggle state of plusOperator


% --- Executes on button press in MinusOperator.
function MinusOperator_Callback(hObject, eventdata, handles)
% hObject    handle to MinusOperator (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hint: get(hObject,'Value') returns toggle state of MinusOperator


% --- Executes on button press in DivisionOperator.
function DivisionOperator_Callback(hObject, eventdata, handles)
% hObject    handle to DivisionOperator (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hint: get(hObject,'Value') returns toggle state of DivisionOperator


% --- Executes on button press in MultiOperator.
function MultiOperator_Callback(hObject, eventdata, handles)
% hObject    handle to MultiOperator (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hint: get(hObject,'Value') returns toggle state of MultiOperator


% --- Executes on button press in equalBtn.
function equalBtn_Callback(hObject, eventdata, handles)
% hObject    handle to equalBtn (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
btn = get(handles.uibuttongroup1, "SelectedObject");        % get the selected button form radio group
one =str2double(get(handles.NumOne, 'String')); 
two= str2double(get(handles.NumTwo, 'String')); 
switch(get(btn, "tag"))  
    case 'plusOperator'
        set(handles.ErrorText,'string',''); 
        a = one + two;
        set(handles.ResultS,'string','');
        set(handles.ResultS,'string',a);
    case 'MinusOperator'
        set(handles.ErrorText,'string',''); 
        a = one - two;
        set(handles.ResultS,'string','');
        set(handles.ResultS,'string',a);
     case 'MultiOperator'
        set(handles.ErrorText,'string',''); 
        a = one * two;
        set(handles.ResultS,'string','');
        set(handles.ResultS,'string',a);
    case 'DivisionOperator'
        if two == 0
            set(handles.ResultS,'string','');
            set(handles.ErrorText,'string','can not divide by Zero');
        else
        set(handles.ErrorText,'string','');    
        a = one / two;
        set(handles.ResultS,'string','');
        set(handles.ResultS,'string',a);
        end
end


function EnterEq_Callback(hObject, eventdata, handles)
% hObject    handle to EnterEq (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of EnterEq as text
%        str2double(get(hObject,'String')) returns contents of EnterEq as a double


% --- Executes during object creation, after setting all properties.
function EnterEq_CreateFcn(hObject, eventdata, handles)
% hObject    handle to EnterEq (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function edit5_Callback(hObject, eventdata, handles)
% hObject    handle to edit5 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit5 as text
%        str2double(get(hObject,'String')) returns contents of edit5 as a double


% --- Executes during object creation, after setting all properties.
function edit5_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit5 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function edit6_Callback(hObject, eventdata, handles)
% hObject    handle to edit6 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit6 as text
%        str2double(get(hObject,'String')) returns contents of edit6 as a double


% --- Executes during object creation, after setting all properties.
function edit6_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit6 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in PlusEq.
function PlusEq_Callback(hObject, eventdata, handles)
% hObject    handle to PlusEq (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hint: get(hObject,'Value') returns toggle state of PlusEq


% --- Executes on button press in radiobutton6.
function radiobutton6_Callback(hObject, eventdata, handles)
% hObject    handle to radiobutton6 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hint: get(hObject,'Value') returns toggle state of radiobutton6


% --- Executes on button press in radiobutton7.
function radiobutton7_Callback(hObject, eventdata, handles)
% hObject    handle to radiobutton7 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hint: get(hObject,'Value') returns toggle state of radiobutton7


% --- Executes on button press in radiobutton8.
function radiobutton8_Callback(hObject, eventdata, handles)
% hObject    handle to radiobutton8 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hint: get(hObject,'Value') returns toggle state of radiobutton8


% --- Executes on button press in pushbutton2.
function pushbutton2_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
btn2 = get(handles.uibuttongroup2, "SelectedObject");
set(handles.ResultEq, "String", "");
myX = str2num(get(handles.edit5, 'String'));
myY = str2num(get(handles.edit6, 'String'));
handles.a=[];
switch(get(btn2, "tag"))  
    case 'PlusEq'
 
        a = myX + myY;
        set(handles.ResultEq,'string','');
        set(handles.ResultEq,'string',num2str(a));
    case 'radiobutton6'
       
        a = myX - myY;
        set(handles.ResultEq,'string','');
        set(handles.ResultEq,'string',num2str(a));
     case 'radiobutton8'
     
        a = myX .* myY;
        set(handles.ResultEq,'string','');
        set(handles.ResultEq,'string',num2str(a));
    case 'radiobutton7'
    
        a =myX ./ myY;
        set(handles.ResultEq,'string','');
        set(handles.ResultEq,'string',num2str(a));
      
end

% --- Executes during object creation, after setting all properties.
function Sign_CreateFcn(hObject, eventdata, handles)
% hObject    handle to Sign (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called
if handles.plusOperator.Value == 1
    set(handles.Sign, "String", "+");
  % code
elseif handles.MinusOperator.Value == 1
    set(handles.Sign, "String", "-");
  % other code
elseif handles.DivisionOperator.Value == 1
    set(handles.Sign, "String", "/");
elseif handles.MultiOperator.Value == 1
    set(handles.Sign, "String", "*");
end



% --- Executes when selected object is changed in uibuttongroup1.
function uibuttongroup1_SelectionChangedFcn(hObject, eventdata, handles)
% hObject    handle to the selected object in uibuttongroup1 
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
switch(get(eventdata.NewValue,'Tag'))
    case 'plusOperator'
        a=get(handles.plusOperator,'string');
        set(handles.Sign,'string','');
        set(handles.Sign,'string','+');
    case 'MinusOperator'
        
        set(handles.Sign,'string','');
        set(handles.Sign,'string','-');
     case 'MultiOperator'
       
        set(handles.Sign,'string','');        
        set(handles.Sign,'string','*');
    case 'DivisionOperator'
       
        set(handles.Sign,'string','');
        set(handles.Sign,'string','/');
end



% --- Executes on button press in plot.
function plot_Callback(hObject, eventdata, handles)
% hObject    handle to plot (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
a=get(handels.EnterEq,'string');
x=0:0.1:10;
b=sin(2*pi*x);
axes(handels.axes1);
global plot_fig;
plot_fig=plot(b);
% plot(eval(a));

% --- Executes on button press in deletePlot.
function deletePlot_Callback(hObject, eventdata, handles)
% hObject    handle to deletePlot (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)


% --- Executes when selected object is changed in uibuttongroup2.
function uibuttongroup2_SelectionChangedFcn(hObject, eventdata, handles)
% hObject    handle to the selected object in uibuttongroup2 
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
switch(get(eventdata.NewValue,'Tag'))
    case 'PlusEq'
        set(handles.SignEq,'string','');
        set(handles.SignEq,'string','+');
    case 'radiobutton6'
        set(handles.SignEq,'string','');
        set(handles.SignEq,'string','-');
     case 'radiobutton8'
        set(handles.SignEq,'string','');        
        set(handles.SignEq,'string','*');
    case 'radiobutton7'
        set(handles.SignEq,'string','');
        set(handles.SignEq,'string','/');
end
