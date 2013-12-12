#include "SystemInterface.h"

#include <SDL2/SDL.h>

#include <chrono>
#include <easylogging++.h>

float SystemInterface::GetElapsedTime()
{
    using namespace std;
	return chrono::duration_cast<chrono::duration<double, std::ratio<1> > >(chrono::high_resolution_clock::now().time_since_epoch()).count();
}

void SystemInterface::ActivateKeyboard()
{
	SDL_StartTextInput();
}

void SystemInterface::DeactivateKeyboard()
{
	SDL_StopTextInput();
}

void SystemInterface::Release()
{
	// do nothing (so far)
}

int SystemInterface::getKeyModifiers() const
{
    int temp = 0;
    auto modState = SDL_GetModState();
    
    if(modState | KMOD_LALT || modState | KMOD_RALT)
    {
        temp |= Rocket::Core::Input::KM_ALT;
    }
    
    if(modState | KMOD_LCTRL || modState | KMOD_RCTRL)
    {
        temp |= Rocket::Core::Input::KM_CTRL;
    }
    
    if(modState | KMOD_LSHIFT || modState | KMOD_RSHIFT)
    {
        temp |= Rocket::Core::Input::KM_SHIFT;
    }
    
    if(modState | KMOD_LGUI || modState | KMOD_RGUI)
    {
        temp |= Rocket::Core::Input::KM_META;
    }
    
    return temp;
}

Rocket::Core::Input::KeyIdentifier SystemInterface::translateKey(const SDL_Keycode& key) const
{
    switch(key)
	{
        case SDLK_a:
            return Rocket::Core::Input::KI_A;
            break;
        case SDLK_b:
            return Rocket::Core::Input::KI_B;
            break;
        case SDLK_c:
            return Rocket::Core::Input::KI_C;
            break;
        case SDLK_d:
            return Rocket::Core::Input::KI_D;
            break;
        case SDLK_e:
            return Rocket::Core::Input::KI_E;
            break;
        case SDLK_f:
            return Rocket::Core::Input::KI_F;
            break;
        case SDLK_g:
            return Rocket::Core::Input::KI_G;
            break;
        case SDLK_h:
            return Rocket::Core::Input::KI_H;
            break;
        case SDLK_i:
            return Rocket::Core::Input::KI_I;
            break;
        case SDLK_j:
            return Rocket::Core::Input::KI_J;
            break;
        case SDLK_k:
            return Rocket::Core::Input::KI_K;
            break;
        case SDLK_l:
            return Rocket::Core::Input::KI_L;
            break;
        case SDLK_m:
            return Rocket::Core::Input::KI_M;
            break;
        case SDLK_n:
            return Rocket::Core::Input::KI_N;
            break;
        case SDLK_o:
            return Rocket::Core::Input::KI_O;
            break;
        case SDLK_p:
            return Rocket::Core::Input::KI_P;
            break;
        case SDLK_q:
            return Rocket::Core::Input::KI_Q;
            break;
        case SDLK_r:
            return Rocket::Core::Input::KI_R;
            break;
        case SDLK_s:
            return Rocket::Core::Input::KI_S;
            break;
        case SDLK_t:
            return Rocket::Core::Input::KI_T;
            break;
        case SDLK_u:
            return Rocket::Core::Input::KI_U;
            break;
        case SDLK_v:
            return Rocket::Core::Input::KI_V;
            break;
        case SDLK_w:
            return Rocket::Core::Input::KI_W;
            break;
        case SDLK_x:
            return Rocket::Core::Input::KI_X;
            break;
        case SDLK_y:
            return Rocket::Core::Input::KI_Y;
            break;
        case SDLK_z:
            return Rocket::Core::Input::KI_Z;
            break;
        case SDLK_0:
            return Rocket::Core::Input::KI_0;
            break;
        case SDLK_1:
            return Rocket::Core::Input::KI_1;
            break;
        case SDLK_2:
            return Rocket::Core::Input::KI_2;
            break;
        case SDLK_3:
            return Rocket::Core::Input::KI_3;
            break;
        case SDLK_4:
            return Rocket::Core::Input::KI_4;
            break;
        case SDLK_5:
            return Rocket::Core::Input::KI_5;
            break;
        case SDLK_6:
            return Rocket::Core::Input::KI_6;
            break;
        case SDLK_7:
            return Rocket::Core::Input::KI_7;
            break;
        case SDLK_8:
            return Rocket::Core::Input::KI_8;
            break;
        case SDLK_9:
            return Rocket::Core::Input::KI_9;
            break;
        case SDLK_KP_0:
            return Rocket::Core::Input::KI_NUMPAD0;
            break;
        case SDLK_KP_1:
            return Rocket::Core::Input::KI_NUMPAD1;
            break;
        case SDLK_KP_2:
            return Rocket::Core::Input::KI_NUMPAD2;
            break;
        case SDLK_KP_3:
            return Rocket::Core::Input::KI_NUMPAD3;
            break;
        case SDLK_KP_4:
            return Rocket::Core::Input::KI_NUMPAD4;
            break;
        case SDLK_KP_5:
            return Rocket::Core::Input::KI_NUMPAD5;
            break;
        case SDLK_KP_6:
            return Rocket::Core::Input::KI_NUMPAD6;
            break;
        case SDLK_KP_7:
            return Rocket::Core::Input::KI_NUMPAD7;
            break;
        case SDLK_KP_8:
            return Rocket::Core::Input::KI_NUMPAD8;
            break;
        case SDLK_KP_9:
            return Rocket::Core::Input::KI_NUMPAD9;
            break;
        case SDLK_LEFT:
            return Rocket::Core::Input::KI_LEFT;
            break;
        case SDLK_RIGHT:
            return Rocket::Core::Input::KI_RIGHT;
            break;
        case SDLK_UP:
            return Rocket::Core::Input::KI_UP;
            break;
        case SDLK_DOWN:
            return Rocket::Core::Input::KI_DOWN;
            break;
        case SDLK_PLUS:
            return Rocket::Core::Input::KI_ADD;
            break;
        case SDLK_BACKSPACE:
            return Rocket::Core::Input::KI_BACK;
            break;
        case SDLK_DELETE:
            return Rocket::Core::Input::KI_DELETE;
            break;
        case SDLK_SLASH:
            return Rocket::Core::Input::KI_DIVIDE;
            break;
        case SDLK_END:
            return Rocket::Core::Input::KI_END;
            break;
        case SDLK_ESCAPE:
            return Rocket::Core::Input::KI_ESCAPE;
            break;
        case SDLK_F1:
            return Rocket::Core::Input::KI_F1;
            break;
        case SDLK_F2:
            return Rocket::Core::Input::KI_F2;
            break;
        case SDLK_F3:
            return Rocket::Core::Input::KI_F3;
            break;
        case SDLK_F4:
            return Rocket::Core::Input::KI_F4;
            break;
        case SDLK_F5:
            return Rocket::Core::Input::KI_F5;
            break;
        case SDLK_F6:
            return Rocket::Core::Input::KI_F6;
            break;
        case SDLK_F7:
            return Rocket::Core::Input::KI_F7;
            break;
        case SDLK_F8:
            return Rocket::Core::Input::KI_F8;
            break;
        case SDLK_F9:
            return Rocket::Core::Input::KI_F9;
            break;
        case SDLK_F10:
            return Rocket::Core::Input::KI_F10;
            break;
        case SDLK_F11:
            return Rocket::Core::Input::KI_F11;
            break;
        case SDLK_F12:
            return Rocket::Core::Input::KI_F12;
            break;
        case SDLK_F13:
            return Rocket::Core::Input::KI_F13;
            break;
        case SDLK_F14:
            return Rocket::Core::Input::KI_F14;
            break;
        case SDLK_F15:
            return Rocket::Core::Input::KI_F15;
            break;
        case SDLK_F16:
            return Rocket::Core::Input::KI_F16;
            break;
        case SDLK_F17:
            return Rocket::Core::Input::KI_F17;
            break;
        case SDLK_F18:
            return Rocket::Core::Input::KI_F18;
            break;
        case SDLK_F19:
            return Rocket::Core::Input::KI_F19;
            break;
        case SDLK_F20:
            return Rocket::Core::Input::KI_F20;
            break;
        case SDLK_F21:
            return Rocket::Core::Input::KI_F21;
            break;
        case SDLK_F22:
            return Rocket::Core::Input::KI_F22;
            break;
        case SDLK_F23:
            return Rocket::Core::Input::KI_F23;
            break;
        case SDLK_F24:
            return Rocket::Core::Input::KI_F24;
            break;
        case SDLK_HOME:
            return Rocket::Core::Input::KI_HOME;
            break;
        case SDLK_INSERT:
            return Rocket::Core::Input::KI_INSERT;
            break;
        case SDLK_LCTRL:
            return Rocket::Core::Input::KI_LCONTROL;
            break;
        case SDLK_LSHIFT:
            return Rocket::Core::Input::KI_LSHIFT;
            break;
        case SDLK_ASTERISK:
            return Rocket::Core::Input::KI_MULTIPLY;
            break;
        case SDLK_PAUSE:
            return Rocket::Core::Input::KI_PAUSE;
            break;
        case SDLK_RCTRL:
            return Rocket::Core::Input::KI_RCONTROL;
            break;
        case SDLK_RETURN:
            return Rocket::Core::Input::KI_RETURN;
            break;
        case SDLK_RSHIFT:
            return Rocket::Core::Input::KI_RSHIFT;
            break;
        case SDLK_SPACE:
            return Rocket::Core::Input::KI_SPACE;
            break;
        case SDLK_MINUS:
            return Rocket::Core::Input::KI_SUBTRACT;
            break;
        case SDLK_TAB:
            return Rocket::Core::Input::KI_TAB;
            break;
        case SDLK_LGUI:
            return Rocket::Core::Input::KI_LWIN;
            break;
        case SDLK_RGUI:
            return Rocket::Core::Input::KI_RWIN;
            break;
        case SDLK_APPLICATION:
            return Rocket::Core::Input::KI_APPS;
	};
    
	return Rocket::Core::Input::KI_UNKNOWN;
}

bool SystemInterface::LogMessage(Rocket::Core::Log::Type type, const Rocket::Core::String& message)
{
    // note:
    // you may change the code in here to suit your needs
	switch(type)
	{
		case Rocket::Core::Log::LT_WARNING:
			LOG(WARNING) << "libRocket: " << message.CString();
			break;
		case Rocket::Core::Log::LT_INFO:
			LOG(INFO) << "libRocket: " << message.CString();
			break;
		case Rocket::Core::Log::LT_ERROR:
			LOG(ERROR) << "libRocket: " << message.CString();
			break;
		case Rocket::Core::Log::LT_ASSERT:
			LOG(FATAL) << "libRocket: " << message.CString();
			break;
		default:
			LOG(INFO) << "libRocket [UNKNOWN]: " << message.CString();
			break;
	}
	
	return true;
}