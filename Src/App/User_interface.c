/** Generated by YAKINDU Statechart Tools code generator. */

#include "App/User_interface.h"
#include "sc_types.h"

/*! \file Implementation of the state machine 'user_interface'
*/

/* prototypes of all internal functions */
static void effect_main_region_Cronometro_tr0(User_interface* handle);
static void effect_main_region_Cuenta_Regresiva_tr0(User_interface* handle);
static void enact_main_region_Principal(User_interface* handle);
static void enact_main_region_Cronometro_r1_Inicializar(User_interface* handle);
static void enact_main_region_Cuenta_Regresiva_r1_Inicializar(User_interface* handle);
static void enact_main_region_Cuenta_Regresiva_r1_Corriendo(User_interface* handle);
static void enseq_main_region_Principal_default(User_interface* handle);
static void enseq_main_region_Cronometro_default(User_interface* handle);
static void enseq_main_region_Cronometro_r1_Inicializar_default(User_interface* handle);
static void enseq_main_region_Cronometro_r1_Corriendo_default(User_interface* handle);
static void enseq_main_region_Cronometro_r1_Pausar_default(User_interface* handle);
static void enseq_main_region_Cuenta_Regresiva_default(User_interface* handle);
static void enseq_main_region_Cuenta_Regresiva_r1_Inicializar_default(User_interface* handle);
static void enseq_main_region_Cuenta_Regresiva_r1_Corriendo_default(User_interface* handle);
static void enseq_main_region_Cuenta_Regresiva_r1_Pausar_default(User_interface* handle);
static void enseq_main_region_Cuenta_Regresiva_r1_Finalizado_default(User_interface* handle);
static void enseq_main_region_default(User_interface* handle);
static void enseq_main_region_Cronometro_r1_default(User_interface* handle);
static void enseq_main_region_Cuenta_Regresiva_r1_default(User_interface* handle);
static void exseq_main_region_Principal(User_interface* handle);
static void exseq_main_region_Cronometro(User_interface* handle);
static void exseq_main_region_Cronometro_r1_Inicializar(User_interface* handle);
static void exseq_main_region_Cronometro_r1_Corriendo(User_interface* handle);
static void exseq_main_region_Cronometro_r1_Pausar(User_interface* handle);
static void exseq_main_region_Cuenta_Regresiva(User_interface* handle);
static void exseq_main_region_Cuenta_Regresiva_r1_Inicializar(User_interface* handle);
static void exseq_main_region_Cuenta_Regresiva_r1_Corriendo(User_interface* handle);
static void exseq_main_region_Cuenta_Regresiva_r1_Pausar(User_interface* handle);
static void exseq_main_region_Cuenta_Regresiva_r1_Finalizado(User_interface* handle);
static void exseq_main_region(User_interface* handle);
static void exseq_main_region_Cronometro_r1(User_interface* handle);
static void exseq_main_region_Cuenta_Regresiva_r1(User_interface* handle);
static void react_main_region__entry_Default(User_interface* handle);
static void react_main_region_Cronometro_r1__entry_Default(User_interface* handle);
static void react_main_region_Cuenta_Regresiva_r1__entry_Default(User_interface* handle);
static void react_main_region_Cronometro_r1__exit_Default(User_interface* handle);
static void react_main_region_Cuenta_Regresiva_r1__exit_Default(User_interface* handle);
static sc_boolean react(User_interface* handle);
static sc_boolean main_region_Principal_react(User_interface* handle, const sc_boolean try_transition);
static sc_boolean main_region_Cronometro_react(User_interface* handle, const sc_boolean try_transition);
static sc_boolean main_region_Cronometro_r1_Inicializar_react(User_interface* handle, const sc_boolean try_transition);
static sc_boolean main_region_Cronometro_r1_Corriendo_react(User_interface* handle, const sc_boolean try_transition);
static sc_boolean main_region_Cronometro_r1_Pausar_react(User_interface* handle, const sc_boolean try_transition);
static sc_boolean main_region_Cuenta_Regresiva_react(User_interface* handle, const sc_boolean try_transition);
static sc_boolean main_region_Cuenta_Regresiva_r1_Inicializar_react(User_interface* handle, const sc_boolean try_transition);
static sc_boolean main_region_Cuenta_Regresiva_r1_Corriendo_react(User_interface* handle, const sc_boolean try_transition);
static sc_boolean main_region_Cuenta_Regresiva_r1_Pausar_react(User_interface* handle, const sc_boolean try_transition);
static sc_boolean main_region_Cuenta_Regresiva_r1_Finalizado_react(User_interface* handle, const sc_boolean try_transition);
static void clearInEvents(User_interface* handle);
static void clearOutEvents(User_interface* handle);



void user_interface_init(User_interface* handle)
{
	sc_integer i;
	
	for (i = 0; i < USER_INTERFACE_MAX_ORTHOGONAL_STATES; ++i)
	{
		handle->stateConfVector[i] = User_interface_last_state;
	}
	
	
	handle->stateConfVectorPosition = 0;
	
	clearInEvents(handle);
	clearOutEvents(handle);
	
	/* Default init sequence for statechart user_interface */
	handle->iface.OLED_ST = 0;
}

void user_interface_enter(User_interface* handle)
{
	/* Default enter sequence for statechart user_interface */
	enseq_main_region_default(handle);
}

void user_interface_runCycle(User_interface* handle)
{
	clearOutEvents(handle);
	for (handle->stateConfVectorPosition = 0;
		handle->stateConfVectorPosition < USER_INTERFACE_MAX_ORTHOGONAL_STATES;
		handle->stateConfVectorPosition++)
		{
			
		switch (handle->stateConfVector[handle->stateConfVectorPosition])
		{
		case User_interface_main_region_Principal:
		{
			main_region_Principal_react(handle, bool_true);
			break;
		}
		case User_interface_main_region_Cronometro_r1_Inicializar:
		{
			main_region_Cronometro_r1_Inicializar_react(handle, bool_true);
			break;
		}
		case User_interface_main_region_Cronometro_r1_Corriendo:
		{
			main_region_Cronometro_r1_Corriendo_react(handle, bool_true);
			break;
		}
		case User_interface_main_region_Cronometro_r1_Pausar:
		{
			main_region_Cronometro_r1_Pausar_react(handle, bool_true);
			break;
		}
		case User_interface_main_region_Cuenta_Regresiva_r1_Inicializar:
		{
			main_region_Cuenta_Regresiva_r1_Inicializar_react(handle, bool_true);
			break;
		}
		case User_interface_main_region_Cuenta_Regresiva_r1_Corriendo:
		{
			main_region_Cuenta_Regresiva_r1_Corriendo_react(handle, bool_true);
			break;
		}
		case User_interface_main_region_Cuenta_Regresiva_r1_Pausar:
		{
			main_region_Cuenta_Regresiva_r1_Pausar_react(handle, bool_true);
			break;
		}
		case User_interface_main_region_Cuenta_Regresiva_r1_Finalizado:
		{
			main_region_Cuenta_Regresiva_r1_Finalizado_react(handle, bool_true);
			break;
		}
		default:
			break;
		}
	}
	
	clearInEvents(handle);
}

void user_interface_exit(User_interface* handle)
{
	/* Default exit sequence for statechart user_interface */
	exseq_main_region(handle);
}

sc_boolean user_interface_isActive(const User_interface* handle)
{
	sc_boolean result = bool_false;
	sc_integer i;
	
	for(i = 0; i < USER_INTERFACE_MAX_ORTHOGONAL_STATES; i++)
	{
		result = result || handle->stateConfVector[i] != User_interface_last_state;
	}
	
	return result;
}

/* 
 * Always returns 'false' since this state machine can never become final.
 */
sc_boolean user_interface_isFinal(const User_interface* handle)
{
(void)(handle);
return bool_false;

}

sc_boolean user_interface_isStateActive(const User_interface* handle, User_interfaceStates state)
{
	sc_boolean result = bool_false;
	switch (state)
	{
		case User_interface_main_region_Principal :
			result = (sc_boolean) (handle->stateConfVector[SCVI_USER_INTERFACE_MAIN_REGION_PRINCIPAL] == User_interface_main_region_Principal
			);
			break;
		case User_interface_main_region_Cronometro :
			result = (sc_boolean) (handle->stateConfVector[SCVI_USER_INTERFACE_MAIN_REGION_CRONOMETRO] >= User_interface_main_region_Cronometro
				&& handle->stateConfVector[SCVI_USER_INTERFACE_MAIN_REGION_CRONOMETRO] <= User_interface_main_region_Cronometro_r1_Pausar);
			break;
		case User_interface_main_region_Cronometro_r1_Inicializar :
			result = (sc_boolean) (handle->stateConfVector[SCVI_USER_INTERFACE_MAIN_REGION_CRONOMETRO_R1_INICIALIZAR] == User_interface_main_region_Cronometro_r1_Inicializar
			);
			break;
		case User_interface_main_region_Cronometro_r1_Corriendo :
			result = (sc_boolean) (handle->stateConfVector[SCVI_USER_INTERFACE_MAIN_REGION_CRONOMETRO_R1_CORRIENDO] == User_interface_main_region_Cronometro_r1_Corriendo
			);
			break;
		case User_interface_main_region_Cronometro_r1_Pausar :
			result = (sc_boolean) (handle->stateConfVector[SCVI_USER_INTERFACE_MAIN_REGION_CRONOMETRO_R1_PAUSAR] == User_interface_main_region_Cronometro_r1_Pausar
			);
			break;
		case User_interface_main_region_Cuenta_Regresiva :
			result = (sc_boolean) (handle->stateConfVector[SCVI_USER_INTERFACE_MAIN_REGION_CUENTA_REGRESIVA] >= User_interface_main_region_Cuenta_Regresiva
				&& handle->stateConfVector[SCVI_USER_INTERFACE_MAIN_REGION_CUENTA_REGRESIVA] <= User_interface_main_region_Cuenta_Regresiva_r1_Finalizado);
			break;
		case User_interface_main_region_Cuenta_Regresiva_r1_Inicializar :
			result = (sc_boolean) (handle->stateConfVector[SCVI_USER_INTERFACE_MAIN_REGION_CUENTA_REGRESIVA_R1_INICIALIZAR] == User_interface_main_region_Cuenta_Regresiva_r1_Inicializar
			);
			break;
		case User_interface_main_region_Cuenta_Regresiva_r1_Corriendo :
			result = (sc_boolean) (handle->stateConfVector[SCVI_USER_INTERFACE_MAIN_REGION_CUENTA_REGRESIVA_R1_CORRIENDO] == User_interface_main_region_Cuenta_Regresiva_r1_Corriendo
			);
			break;
		case User_interface_main_region_Cuenta_Regresiva_r1_Pausar :
			result = (sc_boolean) (handle->stateConfVector[SCVI_USER_INTERFACE_MAIN_REGION_CUENTA_REGRESIVA_R1_PAUSAR] == User_interface_main_region_Cuenta_Regresiva_r1_Pausar
			);
			break;
		case User_interface_main_region_Cuenta_Regresiva_r1_Finalizado :
			result = (sc_boolean) (handle->stateConfVector[SCVI_USER_INTERFACE_MAIN_REGION_CUENTA_REGRESIVA_R1_FINALIZADO] == User_interface_main_region_Cuenta_Regresiva_r1_Finalizado
			);
			break;
		default:
			result = bool_false;
			break;
	}
	return result;
}

static void clearInEvents(User_interface* handle)
{
	handle->iface.UP_raised = bool_false;
	handle->iface.DOWN_raised = bool_false;
	handle->iface.SET_raised = bool_false;
	handle->iface.RESET_raised = bool_false;
	handle->iface.TIMEOUT_raised = bool_false;
}

static void clearOutEvents(User_interface* handle)
{
	handle->iface.TIM_UP_raised = bool_false;
	handle->iface.TIM_DOWN_raised = bool_false;
	handle->iface.RESET_TIM_raised = bool_false;
	handle->iface.UPDATE_raised = bool_false;
	handle->iface.NEXT_raised = bool_false;
}

void user_interfaceIface_raise_uP(User_interface* handle)
{
	handle->iface.UP_raised = bool_true;
	
	user_interface_runCycle(handle);
}
void user_interfaceIface_raise_dOWN(User_interface* handle)
{
	handle->iface.DOWN_raised = bool_true;
	
	user_interface_runCycle(handle);
}
void user_interfaceIface_raise_sET(User_interface* handle)
{
	handle->iface.SET_raised = bool_true;
	
	user_interface_runCycle(handle);
}
void user_interfaceIface_raise_rESET(User_interface* handle)
{
	handle->iface.RESET_raised = bool_true;
	
	user_interface_runCycle(handle);
}
void user_interfaceIface_raise_tIMEOUT(User_interface* handle)
{
	handle->iface.TIMEOUT_raised = bool_true;
	
	user_interface_runCycle(handle);
}

sc_boolean user_interfaceIface_israised_tIM_UP(const User_interface* handle)
{
	return handle->iface.TIM_UP_raised;
}
sc_boolean user_interfaceIface_israised_tIM_DOWN(const User_interface* handle)
{
	return handle->iface.TIM_DOWN_raised;
}
sc_boolean user_interfaceIface_israised_rESET_TIM(const User_interface* handle)
{
	return handle->iface.RESET_TIM_raised;
}
sc_boolean user_interfaceIface_israised_uPDATE(const User_interface* handle)
{
	return handle->iface.UPDATE_raised;
}
sc_boolean user_interfaceIface_israised_nEXT(const User_interface* handle)
{
	return handle->iface.NEXT_raised;
}

sc_integer user_interfaceIface_get_oLED_ST(const User_interface* handle)
{
	return handle->iface.OLED_ST;
}
void user_interfaceIface_set_oLED_ST(User_interface* handle, sc_integer value)
{
	handle->iface.OLED_ST = value;
}

/* implementations of all internal functions */

static void effect_main_region_Cronometro_tr0(User_interface* handle)
{
	exseq_main_region_Cronometro(handle);
	enseq_main_region_Principal_default(handle);
	react(handle);
}

static void effect_main_region_Cuenta_Regresiva_tr0(User_interface* handle)
{
	exseq_main_region_Cuenta_Regresiva(handle);
	enseq_main_region_Principal_default(handle);
	react(handle);
}

/* Entry action for state 'Principal'. */
static void enact_main_region_Principal(User_interface* handle)
{
	/* Entry action for state 'Principal'. */
	handle->iface.OLED_ST = 0;
}

/* Entry action for state 'Inicializar'. */
static void enact_main_region_Cronometro_r1_Inicializar(User_interface* handle)
{
	/* Entry action for state 'Inicializar'. */
	handle->iface.RESET_TIM_raised = bool_true
	;
	handle->iface.OLED_ST = 1;
}

/* Entry action for state 'Inicializar'. */
static void enact_main_region_Cuenta_Regresiva_r1_Inicializar(User_interface* handle)
{
	/* Entry action for state 'Inicializar'. */
	handle->iface.RESET_TIM_raised = bool_true
	;
	handle->iface.OLED_ST = 2;
}

/* Entry action for state 'Corriendo'. */
static void enact_main_region_Cuenta_Regresiva_r1_Corriendo(User_interface* handle)
{
	/* Entry action for state 'Corriendo'. */
	handle->iface.OLED_ST = 3;
}

/* 'default' enter sequence for state Principal */
static void enseq_main_region_Principal_default(User_interface* handle)
{
	/* 'default' enter sequence for state Principal */
	enact_main_region_Principal(handle);
	handle->stateConfVector[0] = User_interface_main_region_Principal;
	handle->stateConfVectorPosition = 0;
}

/* 'default' enter sequence for state Cronometro */
static void enseq_main_region_Cronometro_default(User_interface* handle)
{
	/* 'default' enter sequence for state Cronometro */
	enseq_main_region_Cronometro_r1_default(handle);
}

/* 'default' enter sequence for state Inicializar */
static void enseq_main_region_Cronometro_r1_Inicializar_default(User_interface* handle)
{
	/* 'default' enter sequence for state Inicializar */
	enact_main_region_Cronometro_r1_Inicializar(handle);
	handle->stateConfVector[0] = User_interface_main_region_Cronometro_r1_Inicializar;
	handle->stateConfVectorPosition = 0;
}

/* 'default' enter sequence for state Corriendo */
static void enseq_main_region_Cronometro_r1_Corriendo_default(User_interface* handle)
{
	/* 'default' enter sequence for state Corriendo */
	handle->stateConfVector[0] = User_interface_main_region_Cronometro_r1_Corriendo;
	handle->stateConfVectorPosition = 0;
}

/* 'default' enter sequence for state Pausar */
static void enseq_main_region_Cronometro_r1_Pausar_default(User_interface* handle)
{
	/* 'default' enter sequence for state Pausar */
	handle->stateConfVector[0] = User_interface_main_region_Cronometro_r1_Pausar;
	handle->stateConfVectorPosition = 0;
}

/* 'default' enter sequence for state Cuenta Regresiva */
static void enseq_main_region_Cuenta_Regresiva_default(User_interface* handle)
{
	/* 'default' enter sequence for state Cuenta Regresiva */
	enseq_main_region_Cuenta_Regresiva_r1_default(handle);
}

/* 'default' enter sequence for state Inicializar */
static void enseq_main_region_Cuenta_Regresiva_r1_Inicializar_default(User_interface* handle)
{
	/* 'default' enter sequence for state Inicializar */
	enact_main_region_Cuenta_Regresiva_r1_Inicializar(handle);
	handle->stateConfVector[0] = User_interface_main_region_Cuenta_Regresiva_r1_Inicializar;
	handle->stateConfVectorPosition = 0;
}

/* 'default' enter sequence for state Corriendo */
static void enseq_main_region_Cuenta_Regresiva_r1_Corriendo_default(User_interface* handle)
{
	/* 'default' enter sequence for state Corriendo */
	enact_main_region_Cuenta_Regresiva_r1_Corriendo(handle);
	handle->stateConfVector[0] = User_interface_main_region_Cuenta_Regresiva_r1_Corriendo;
	handle->stateConfVectorPosition = 0;
}

/* 'default' enter sequence for state Pausar */
static void enseq_main_region_Cuenta_Regresiva_r1_Pausar_default(User_interface* handle)
{
	/* 'default' enter sequence for state Pausar */
	handle->stateConfVector[0] = User_interface_main_region_Cuenta_Regresiva_r1_Pausar;
	handle->stateConfVectorPosition = 0;
}

/* 'default' enter sequence for state Finalizado */
static void enseq_main_region_Cuenta_Regresiva_r1_Finalizado_default(User_interface* handle)
{
	/* 'default' enter sequence for state Finalizado */
	handle->stateConfVector[0] = User_interface_main_region_Cuenta_Regresiva_r1_Finalizado;
	handle->stateConfVectorPosition = 0;
}

/* 'default' enter sequence for region main region */
static void enseq_main_region_default(User_interface* handle)
{
	/* 'default' enter sequence for region main region */
	react_main_region__entry_Default(handle);
}

/* 'default' enter sequence for region r1 */
static void enseq_main_region_Cronometro_r1_default(User_interface* handle)
{
	/* 'default' enter sequence for region r1 */
	react_main_region_Cronometro_r1__entry_Default(handle);
}

/* 'default' enter sequence for region r1 */
static void enseq_main_region_Cuenta_Regresiva_r1_default(User_interface* handle)
{
	/* 'default' enter sequence for region r1 */
	react_main_region_Cuenta_Regresiva_r1__entry_Default(handle);
}

/* Default exit sequence for state Principal */
static void exseq_main_region_Principal(User_interface* handle)
{
	/* Default exit sequence for state Principal */
	handle->stateConfVector[0] = User_interface_last_state;
	handle->stateConfVectorPosition = 0;
}

/* Default exit sequence for state Cronometro */
static void exseq_main_region_Cronometro(User_interface* handle)
{
	/* Default exit sequence for state Cronometro */
	exseq_main_region_Cronometro_r1(handle);
}

/* Default exit sequence for state Inicializar */
static void exseq_main_region_Cronometro_r1_Inicializar(User_interface* handle)
{
	/* Default exit sequence for state Inicializar */
	handle->stateConfVector[0] = User_interface_last_state;
	handle->stateConfVectorPosition = 0;
}

/* Default exit sequence for state Corriendo */
static void exseq_main_region_Cronometro_r1_Corriendo(User_interface* handle)
{
	/* Default exit sequence for state Corriendo */
	handle->stateConfVector[0] = User_interface_last_state;
	handle->stateConfVectorPosition = 0;
}

/* Default exit sequence for state Pausar */
static void exseq_main_region_Cronometro_r1_Pausar(User_interface* handle)
{
	/* Default exit sequence for state Pausar */
	handle->stateConfVector[0] = User_interface_last_state;
	handle->stateConfVectorPosition = 0;
}

/* Default exit sequence for state Cuenta Regresiva */
static void exseq_main_region_Cuenta_Regresiva(User_interface* handle)
{
	/* Default exit sequence for state Cuenta Regresiva */
	exseq_main_region_Cuenta_Regresiva_r1(handle);
}

/* Default exit sequence for state Inicializar */
static void exseq_main_region_Cuenta_Regresiva_r1_Inicializar(User_interface* handle)
{
	/* Default exit sequence for state Inicializar */
	handle->stateConfVector[0] = User_interface_last_state;
	handle->stateConfVectorPosition = 0;
}

/* Default exit sequence for state Corriendo */
static void exseq_main_region_Cuenta_Regresiva_r1_Corriendo(User_interface* handle)
{
	/* Default exit sequence for state Corriendo */
	handle->stateConfVector[0] = User_interface_last_state;
	handle->stateConfVectorPosition = 0;
}

/* Default exit sequence for state Pausar */
static void exseq_main_region_Cuenta_Regresiva_r1_Pausar(User_interface* handle)
{
	/* Default exit sequence for state Pausar */
	handle->stateConfVector[0] = User_interface_last_state;
	handle->stateConfVectorPosition = 0;
}

/* Default exit sequence for state Finalizado */
static void exseq_main_region_Cuenta_Regresiva_r1_Finalizado(User_interface* handle)
{
	/* Default exit sequence for state Finalizado */
	handle->stateConfVector[0] = User_interface_last_state;
	handle->stateConfVectorPosition = 0;
}

/* Default exit sequence for region main region */
static void exseq_main_region(User_interface* handle)
{
	/* Default exit sequence for region main region */
	/* Handle exit of all possible states (of user_interface.main_region) at position 0... */
	switch(handle->stateConfVector[ 0 ])
	{
		case User_interface_main_region_Principal :
		{
			exseq_main_region_Principal(handle);
			break;
		}
		case User_interface_main_region_Cronometro_r1_Inicializar :
		{
			exseq_main_region_Cronometro_r1_Inicializar(handle);
			break;
		}
		case User_interface_main_region_Cronometro_r1_Corriendo :
		{
			exseq_main_region_Cronometro_r1_Corriendo(handle);
			break;
		}
		case User_interface_main_region_Cronometro_r1_Pausar :
		{
			exseq_main_region_Cronometro_r1_Pausar(handle);
			break;
		}
		case User_interface_main_region_Cuenta_Regresiva_r1_Inicializar :
		{
			exseq_main_region_Cuenta_Regresiva_r1_Inicializar(handle);
			break;
		}
		case User_interface_main_region_Cuenta_Regresiva_r1_Corriendo :
		{
			exseq_main_region_Cuenta_Regresiva_r1_Corriendo(handle);
			break;
		}
		case User_interface_main_region_Cuenta_Regresiva_r1_Pausar :
		{
			exseq_main_region_Cuenta_Regresiva_r1_Pausar(handle);
			break;
		}
		case User_interface_main_region_Cuenta_Regresiva_r1_Finalizado :
		{
			exseq_main_region_Cuenta_Regresiva_r1_Finalizado(handle);
			break;
		}
		default: break;
	}
}

/* Default exit sequence for region r1 */
static void exseq_main_region_Cronometro_r1(User_interface* handle)
{
	/* Default exit sequence for region r1 */
	/* Handle exit of all possible states (of user_interface.main_region.Cronometro.r1) at position 0... */
	switch(handle->stateConfVector[ 0 ])
	{
		case User_interface_main_region_Cronometro_r1_Inicializar :
		{
			exseq_main_region_Cronometro_r1_Inicializar(handle);
			break;
		}
		case User_interface_main_region_Cronometro_r1_Corriendo :
		{
			exseq_main_region_Cronometro_r1_Corriendo(handle);
			break;
		}
		case User_interface_main_region_Cronometro_r1_Pausar :
		{
			exseq_main_region_Cronometro_r1_Pausar(handle);
			break;
		}
		default: break;
	}
}

/* Default exit sequence for region r1 */
static void exseq_main_region_Cuenta_Regresiva_r1(User_interface* handle)
{
	/* Default exit sequence for region r1 */
	/* Handle exit of all possible states (of user_interface.main_region.Cuenta_Regresiva.r1) at position 0... */
	switch(handle->stateConfVector[ 0 ])
	{
		case User_interface_main_region_Cuenta_Regresiva_r1_Inicializar :
		{
			exseq_main_region_Cuenta_Regresiva_r1_Inicializar(handle);
			break;
		}
		case User_interface_main_region_Cuenta_Regresiva_r1_Corriendo :
		{
			exseq_main_region_Cuenta_Regresiva_r1_Corriendo(handle);
			break;
		}
		case User_interface_main_region_Cuenta_Regresiva_r1_Pausar :
		{
			exseq_main_region_Cuenta_Regresiva_r1_Pausar(handle);
			break;
		}
		case User_interface_main_region_Cuenta_Regresiva_r1_Finalizado :
		{
			exseq_main_region_Cuenta_Regresiva_r1_Finalizado(handle);
			break;
		}
		default: break;
	}
}

/* Default react sequence for initial entry  */
static void react_main_region__entry_Default(User_interface* handle)
{
	/* Default react sequence for initial entry  */
	enseq_main_region_Principal_default(handle);
}

/* Default react sequence for initial entry  */
static void react_main_region_Cronometro_r1__entry_Default(User_interface* handle)
{
	/* Default react sequence for initial entry  */
	enseq_main_region_Cronometro_r1_Inicializar_default(handle);
}

/* Default react sequence for initial entry  */
static void react_main_region_Cuenta_Regresiva_r1__entry_Default(User_interface* handle)
{
	/* Default react sequence for initial entry  */
	enseq_main_region_Cuenta_Regresiva_r1_Inicializar_default(handle);
}

/* The reactions of exit default. */
static void react_main_region_Cronometro_r1__exit_Default(User_interface* handle)
{
	/* The reactions of exit default. */
	effect_main_region_Cronometro_tr0(handle);
}

/* The reactions of exit default. */
static void react_main_region_Cuenta_Regresiva_r1__exit_Default(User_interface* handle)
{
	/* The reactions of exit default. */
	effect_main_region_Cuenta_Regresiva_tr0(handle);
}

static sc_boolean react(User_interface* handle) {
	/* State machine reactions. */
	return bool_false;
}

static sc_boolean main_region_Principal_react(User_interface* handle, const sc_boolean try_transition) {
	/* The reactions of state Principal. */
	sc_boolean did_transition = try_transition;
	if (try_transition == bool_true)
	{ 
		if (handle->iface.UP_raised == bool_true)
		{ 
			exseq_main_region_Principal(handle);
			enseq_main_region_Cronometro_default(handle);
			react(handle);
		}  else
		{
			if (handle->iface.DOWN_raised == bool_true)
			{ 
				exseq_main_region_Principal(handle);
				enseq_main_region_Cuenta_Regresiva_default(handle);
				react(handle);
			}  else
			{
				did_transition = bool_false;
			}
		}
	} 
	if ((did_transition) == (bool_false))
	{ 
		did_transition = react(handle);
	} 
	return did_transition;
}

static sc_boolean main_region_Cronometro_react(User_interface* handle, const sc_boolean try_transition) {
	/* The reactions of state Cronometro. */
	sc_boolean did_transition = try_transition;
	if (try_transition == bool_true)
	{ 
		did_transition = bool_false;
	} 
	if ((did_transition) == (bool_false))
	{ 
		did_transition = react(handle);
	} 
	return did_transition;
}

static sc_boolean main_region_Cronometro_r1_Inicializar_react(User_interface* handle, const sc_boolean try_transition) {
	/* The reactions of state Inicializar. */
	sc_boolean did_transition = try_transition;
	if (try_transition == bool_true)
	{ 
		if (handle->iface.SET_raised == bool_true)
		{ 
			exseq_main_region_Cronometro_r1_Inicializar(handle);
			enseq_main_region_Cronometro_r1_Corriendo_default(handle);
			main_region_Cronometro_react(handle, bool_false);
		}  else
		{
			if (handle->iface.RESET_raised == bool_true)
			{ 
				exseq_main_region_Cronometro_r1_Inicializar(handle);
				react_main_region_Cronometro_r1__exit_Default(handle);
			}  else
			{
				did_transition = bool_false;
			}
		}
	} 
	if ((did_transition) == (bool_false))
	{ 
		did_transition = main_region_Cronometro_react(handle, try_transition);
	} 
	return did_transition;
}

static sc_boolean main_region_Cronometro_r1_Corriendo_react(User_interface* handle, const sc_boolean try_transition) {
	/* The reactions of state Corriendo. */
	sc_boolean did_transition = try_transition;
	if (try_transition == bool_true)
	{ 
		if (handle->iface.SET_raised == bool_true)
		{ 
			exseq_main_region_Cronometro_r1_Corriendo(handle);
			enseq_main_region_Cronometro_r1_Pausar_default(handle);
			main_region_Cronometro_react(handle, bool_false);
		}  else
		{
			did_transition = bool_false;
		}
	} 
	if ((did_transition) == (bool_false))
	{ 
		handle->iface.TIM_UP_raised = bool_true
		;
		did_transition = main_region_Cronometro_react(handle, try_transition);
	} 
	return did_transition;
}

static sc_boolean main_region_Cronometro_r1_Pausar_react(User_interface* handle, const sc_boolean try_transition) {
	/* The reactions of state Pausar. */
	sc_boolean did_transition = try_transition;
	if (try_transition == bool_true)
	{ 
		if (handle->iface.SET_raised == bool_true)
		{ 
			exseq_main_region_Cronometro_r1_Pausar(handle);
			enseq_main_region_Cronometro_r1_Corriendo_default(handle);
			main_region_Cronometro_react(handle, bool_false);
		}  else
		{
			if (handle->iface.RESET_raised == bool_true)
			{ 
				exseq_main_region_Cronometro_r1_Pausar(handle);
				enseq_main_region_Cronometro_r1_Inicializar_default(handle);
				main_region_Cronometro_react(handle, bool_false);
			}  else
			{
				did_transition = bool_false;
			}
		}
	} 
	if ((did_transition) == (bool_false))
	{ 
		did_transition = main_region_Cronometro_react(handle, try_transition);
	} 
	return did_transition;
}

static sc_boolean main_region_Cuenta_Regresiva_react(User_interface* handle, const sc_boolean try_transition) {
	/* The reactions of state Cuenta Regresiva. */
	sc_boolean did_transition = try_transition;
	if (try_transition == bool_true)
	{ 
		did_transition = bool_false;
	} 
	if ((did_transition) == (bool_false))
	{ 
		did_transition = react(handle);
	} 
	return did_transition;
}

static sc_boolean main_region_Cuenta_Regresiva_r1_Inicializar_react(User_interface* handle, const sc_boolean try_transition) {
	/* The reactions of state Inicializar. */
	sc_boolean did_transition = try_transition;
	if (try_transition == bool_true)
	{ 
		if (handle->iface.SET_raised == bool_true)
		{ 
			exseq_main_region_Cuenta_Regresiva_r1_Inicializar(handle);
			enseq_main_region_Cuenta_Regresiva_r1_Corriendo_default(handle);
			main_region_Cuenta_Regresiva_react(handle, bool_false);
		}  else
		{
			if (handle->iface.RESET_raised == bool_true)
			{ 
				exseq_main_region_Cuenta_Regresiva_r1_Inicializar(handle);
				react_main_region_Cuenta_Regresiva_r1__exit_Default(handle);
			}  else
			{
				did_transition = bool_false;
			}
		}
	} 
	if ((did_transition) == (bool_false))
	{ 
		if (handle->iface.UP_raised == bool_true)
		{ 
			handle->iface.UPDATE_raised = bool_true
			;
		} 
		if (handle->iface.DOWN_raised == bool_true)
		{ 
			handle->iface.NEXT_raised = bool_true
			;
		} 
		did_transition = main_region_Cuenta_Regresiva_react(handle, try_transition);
	} 
	return did_transition;
}

static sc_boolean main_region_Cuenta_Regresiva_r1_Corriendo_react(User_interface* handle, const sc_boolean try_transition) {
	/* The reactions of state Corriendo. */
	sc_boolean did_transition = try_transition;
	if (try_transition == bool_true)
	{ 
		if (handle->iface.SET_raised == bool_true)
		{ 
			exseq_main_region_Cuenta_Regresiva_r1_Corriendo(handle);
			enseq_main_region_Cuenta_Regresiva_r1_Pausar_default(handle);
			main_region_Cuenta_Regresiva_react(handle, bool_false);
		}  else
		{
			if (handle->iface.TIMEOUT_raised == bool_true)
			{ 
				exseq_main_region_Cuenta_Regresiva_r1_Corriendo(handle);
				enseq_main_region_Cuenta_Regresiva_r1_Finalizado_default(handle);
				main_region_Cuenta_Regresiva_react(handle, bool_false);
			}  else
			{
				did_transition = bool_false;
			}
		}
	} 
	if ((did_transition) == (bool_false))
	{ 
		handle->iface.TIM_DOWN_raised = bool_true
		;
		did_transition = main_region_Cuenta_Regresiva_react(handle, try_transition);
	} 
	return did_transition;
}

static sc_boolean main_region_Cuenta_Regresiva_r1_Pausar_react(User_interface* handle, const sc_boolean try_transition) {
	/* The reactions of state Pausar. */
	sc_boolean did_transition = try_transition;
	if (try_transition == bool_true)
	{ 
		if (handle->iface.SET_raised == bool_true)
		{ 
			exseq_main_region_Cuenta_Regresiva_r1_Pausar(handle);
			enseq_main_region_Cuenta_Regresiva_r1_Corriendo_default(handle);
			main_region_Cuenta_Regresiva_react(handle, bool_false);
		}  else
		{
			if (handle->iface.RESET_raised == bool_true)
			{ 
				exseq_main_region_Cuenta_Regresiva_r1_Pausar(handle);
				enseq_main_region_Cuenta_Regresiva_r1_Inicializar_default(handle);
				main_region_Cuenta_Regresiva_react(handle, bool_false);
			}  else
			{
				did_transition = bool_false;
			}
		}
	} 
	if ((did_transition) == (bool_false))
	{ 
		did_transition = main_region_Cuenta_Regresiva_react(handle, try_transition);
	} 
	return did_transition;
}

static sc_boolean main_region_Cuenta_Regresiva_r1_Finalizado_react(User_interface* handle, const sc_boolean try_transition) {
	/* The reactions of state Finalizado. */
	sc_boolean did_transition = try_transition;
	if (try_transition == bool_true)
	{ 
		if (handle->iface.RESET_raised == bool_true)
		{ 
			exseq_main_region_Cuenta_Regresiva_r1_Finalizado(handle);
			react_main_region_Cuenta_Regresiva_r1__exit_Default(handle);
		}  else
		{
			did_transition = bool_false;
		}
	} 
	if ((did_transition) == (bool_false))
	{ 
		did_transition = main_region_Cuenta_Regresiva_react(handle, try_transition);
	} 
	return did_transition;
}

